@class NSString, AWENearbyPendantView, AWENearbyPendantModel;

@interface AWENearbyPendantViewController : UIViewController <AWENearbyPendantViewDelegate>

@property (retain, nonatomic) AWENearbyPendantView *pendantView;
@property (retain, nonatomic) AWENearbyPendantModel *pendantModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unfoldFrame;
@property (nonatomic) BOOL isFolding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pendantView:(id)a0 didSelectedWithType:(unsigned long long)a1;
- (void)__closePendent;
- (void)__jumpToPendantLandingPage;
- (void)updateIfNeedsWithNearbyPendantModel:(id)a0;
- (void)starAnimationIfNeeds;
- (void)stopAnimationIfNeeds;
- (void).cxx_destruct;
- (id)store;
- (void)viewDidLoad;

@end
