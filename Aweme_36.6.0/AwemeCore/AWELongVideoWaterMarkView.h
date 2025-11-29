@class NSArray, UIImageView, UIImage, NSString;

@interface AWELongVideoWaterMarkView : DUXBaseStackView <AWELongVideoWaterMarkViewProtocol>

@property (retain, nonatomic) UIImageView *waterMarkImageView;
@property (retain, nonatomic) UIImage *waterMarkImage;
@property (retain, nonatomic) NSArray *singleDutyViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithAwemeModel:(id)a0 renderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)commentPanelShowAction:(id)a0;
- (void)beforeEnteringLandscapeFeedNotification;
- (void)afterExitingLandscapeFeedNotification;
- (id)findViewWithIdentify:(long long)a0;
- (void)p_decorationWithAwemeModel:(id)a0;
- (void)layoutWithAwemeModel:(id)a0 renderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)hiddenWithIdentify:(long long)a0;
- (void)showWithIdentify:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
