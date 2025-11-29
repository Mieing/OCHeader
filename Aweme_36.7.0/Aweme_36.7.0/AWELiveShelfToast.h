@class NSString, NSTimer, UILabel, UIView;

@interface AWELiveShelfToast : UIView <CAAnimationDelegate>

@property (copy, nonatomic) NSString *text;
@property (weak, nonatomic) UIView *showView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (nonatomic) double offsetY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showText:(id)a0;

- (void)showOnView:(id)a0;
- (void)startAutoHide;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (void)setup;
- (void)show;

@end
