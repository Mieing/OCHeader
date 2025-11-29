@class NSString, AWEAwemeModel, UIView, UIButton;

@interface AWELandScapeBottomDanmakuView : UIView <AWEUserMessage>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *switchButton;
@property (retain, nonatomic) UIButton *postButton;
@property (retain, nonatomic) UIButton *danmakuSettingButton;
@property (retain, nonatomic) UIView *devideLine;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ settingBlock;
@property (copy, nonatomic) id /* block */ postBlock;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)danmakuViewWidth;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)setEvent;
- (void)updateDanmakuEntranceWithAnimation:(BOOL)a0;
- (void)updateSwitchIconImage;
- (void)updatePostButtonTitle;
- (void)updatePostButtonAlpha:(double)a0;
- (void)handleSwitchImageClick;
- (void)handleSettingButtonClick;
- (void)handlePostButtonClick;
- (id)inputPlaceholder;
- (void).cxx_destruct;
- (void)updateBackgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
