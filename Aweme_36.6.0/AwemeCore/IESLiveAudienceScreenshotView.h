@class NSArray, UIImageView, UIView, IESLiveAudienceScreenshotStore;

@interface IESLiveAudienceScreenshotView : UIView

@property (retain, nonatomic) IESLiveAudienceScreenshotStore *store;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) double picSearchOffset;
@property (nonatomic) long long picSearchPosition;
@property (retain, nonatomic) NSArray *iconViews;
@property (copy, nonatomic) id /* block */ tapBackBlock;

- (void)didSetAttachingDIContext;
- (void)animateIcon;
- (void)clickBackButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1 isLandscape:(BOOL)a2;
- (void)setupLandscapePanel;
- (void)setupPortraitPanelNew;
- (void)setupPortraitPanel;
- (void)loadIconViewList;
- (void)setupLayoutWithIconArray:(id)a0;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
