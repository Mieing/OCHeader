@class BDPUniqueID;
@protocol BDPGuardianResultViewDelegate;

@interface BDPGuardianResultView : UIView

@property (readonly, weak, nonatomic) id<BDPGuardianResultViewDelegate> delegate;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (void)didHaveKnow:(id)a0;
- (void)didExitGame:(id)a0;
- (id)initWithName:(id)a0 idNumber:(id)a1 guardianName:(id)a2 uniqueID:(id)a3 delegate:(id)a4;
- (void).cxx_destruct;

@end
