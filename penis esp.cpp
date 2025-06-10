// ======================  penis ESP by CHATGPT ======================

if (penis_esp) {
    float shaft_length = 20.0f;
    float shaft_width = 4.0f;
    float ball_radius = 4.0f;

    ImVec2 penis_origin = {
        boxCenter.x,
        head_screen.y + (height * 0.6f)
    };

    ImVec2 left_ball = {
        penis_origin.x - shaft_width - 2.0f,
        penis_origin.y + shaft_length - ball_radius
    };
    ImVec2 right_ball = {
        penis_origin.x + shaft_width + 2.0f,
        penis_origin.y + shaft_length - ball_radius
    };

    draw->AddCircleFilled(left_ball, ball_radius, ImColor(255, 219, 172, 255));
    draw->AddCircleFilled(right_ball, ball_radius, ImColor(255, 219, 172, 255));

    draw->AddRectFilled(
        ImVec2(penis_origin.x - shaft_width * 0.5f, penis_origin.y),
        ImVec2(penis_origin.x + shaft_width * 0.5f, penis_origin.y + shaft_length),
        ImColor(255, 219, 172, 255)
    );