@interface LynxMarkdownAnimationState : NSObject

@property (nonatomic) int animation_step;
@property (nonatomic) BOOL animation_paused;
@property (nonatomic) BOOL draw_start_event_done;
@property (nonatomic) BOOL draw_end_event_done;

@end
