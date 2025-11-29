@class UILabel, NSTimer;

@interface AWEKefuFloatingWindowExpandTextBubbleController : AWEKefuFloatingWindowBaseController

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL didAddTextLabel;

- (void)p_stopTimer;
- (void)p_startTimer;
- (id)initWithStateConfig:(id)a0;
- (void)didChangeExpandState:(BOOL)a0;
- (id)p_createTextLabel;
- (void)p_updateAvatar;
- (void)p_addTextLabel;
- (id)p_config;
- (void)p_removeTextLabel;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setDelegate:(id)a0;

@end
