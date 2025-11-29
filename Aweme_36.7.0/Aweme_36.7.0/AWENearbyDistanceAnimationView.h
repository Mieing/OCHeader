@class AWENearbyDistanceAnimationContentView, NSString;

@interface AWENearbyDistanceAnimationView : UIView <AWENearbyDistanceAnimationViewProtocol>

@property (retain, nonatomic) AWENearbyDistanceAnimationContentView *firstContentView;
@property (retain, nonatomic) AWENearbyDistanceAnimationContentView *secondContentView;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDistance:(id)a0;
- (void)__buildUI;
- (BOOL)__shouldUpdateWithText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
