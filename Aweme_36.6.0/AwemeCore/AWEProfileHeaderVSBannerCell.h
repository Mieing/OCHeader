@class AWEProfileHeaderContext, NSString, UIView, AWEWebViewController, UITapGestureRecognizer;
@protocol IESHYContainerProtocol;

@interface AWEProfileHeaderVSBannerCell : UICollectionViewCell <AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) AWEWebViewController *bannerViewController;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *liveHybridContainer;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)a0;
- (void)onTapGestureAction:(id)a0;
- (void)handleTapGestureWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)bannerDidAppear;
- (void)bannerDidDisappear;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
