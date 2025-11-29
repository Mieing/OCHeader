@class NSString, NSMutableArray;

@interface WCRecordFBNormalView : WCRecordFDView <CAAnimationDelegate>

@property (retain, nonatomic) NSMutableArray *arrPillarsA;
@property (retain, nonatomic) NSMutableArray *arrPillarsB;
@property (retain, nonatomic) NSMutableArray *arrPillarsC;
@property (retain, nonatomic) NSMutableArray *arrPillarsD;
@property (retain, nonatomic) NSMutableArray *arrPillarsE;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initPillars;
- (void)configPillarsWithPeakPower:(float)a0;
- (void)configBorderPillarsWithPeakPower:(float)a0;
- (void)configCenterPillarsWithPeakPower:(float)a0;
- (void).cxx_destruct;

@end
