@class NSString, BDPFloatingCloseZone_HG, UIView, BDPUniqueID, BDPFloatingView_HG;

@interface BDPFloatingViewController_HG : NSObject <BDPFloatingDelegate_HG>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFloatingView_HG *floatingView;
@property (retain, nonatomic) BDPFloatingCloseZone_HG *closeZone;
@property (copy, nonatomic) id /* block */ showFloatingView;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) double closeZoneRadius;
@property (copy, nonatomic) NSString *frequencyKey;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL iconLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeFloatingView;
- (void)showOn:(id)a0;
- (void)changeUIReadyClose:(BOOL)a0;
- (void)showCloseZone;
- (void)hideCloseZone;
- (void)recordFloatingBallControl;
- (id)initWithUniqueID:(id)a0 withSafeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
