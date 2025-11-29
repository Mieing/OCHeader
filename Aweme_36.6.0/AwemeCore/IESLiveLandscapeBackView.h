@class UIButton, HTSEventContext;

@interface IESLiveLandscapeBackView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL disabled;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)switchToFullScreenMode;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
