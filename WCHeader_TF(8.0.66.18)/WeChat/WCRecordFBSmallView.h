@class NSString, NSMutableArray;

@interface WCRecordFBSmallView : WCRecordFDView <CAAnimationDelegate>

@property (retain, nonatomic) NSMutableArray *arrPillarsA;
@property (retain, nonatomic) NSMutableArray *arrPillarsB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initPillars;
- (void)configPillarsWithPeakPower:(float)a0;
- (void).cxx_destruct;

@end
