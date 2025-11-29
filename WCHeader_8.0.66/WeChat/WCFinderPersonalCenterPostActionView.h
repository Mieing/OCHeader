@class MMBadgeView, NSDictionary, UIView, MMUIButton, UIButton;
@protocol WCFinderPersonalCenterCameraActionHandle, WCFinderPersonalCenterLiveActionHandle;

@interface WCFinderPersonalCenterPostActionView : UIView

@property (retain, nonatomic) MMUIButton *cameraBtn;
@property (retain, nonatomic) MMUIButton *liveBtn;
@property (retain, nonatomic) UIView *postSeparatorLine;
@property (retain, nonatomic) MMBadgeView *liveRedDotLabel;
@property (retain, nonatomic) MMBadgeView *cameraRedDotLabel;
@property (retain, nonatomic) NSDictionary *reportInfo;
@property (retain, nonatomic) id<WCFinderPersonalCenterCameraActionHandle> cameraHandle;
@property (retain, nonatomic) id<WCFinderPersonalCenterLiveActionHandle> liveHandle;
@property (readonly, nonatomic) UIButton *cameraButton;
@property (nonatomic) int commentScene;
@property (nonatomic) BOOL showFinder;
@property (nonatomic) BOOL forceButtonVerticalLayout;
@property (nonatomic) unsigned long long cameraRedDotShowType;
@property (nonatomic) unsigned long long liveRedDotShowType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupExpose;
- (void)setupCommentScene:(int)a0 needPercentPostReport:(BOOL)a1;
- (void)didMoveToWindow;
- (id)createCameraBtn;
- (id)createLiveBtn;
- (id)createActionButton:(id)a0 iconName:(id)a1;
- (id)createPostSeparatorLine;
- (void)layoutElements;
- (void)layoutSubviews;
- (void)_layoutRedDot;
- (void)_updateRedDotLabel:(id *)a0 forButton:(id)a1 showType:(unsigned long long)a2;
- (void)configLiveButton:(BOOL)a0 enable:(BOOL)a1;
- (void)updateReportInfo:(id)a0;
- (void).cxx_destruct;

@end
