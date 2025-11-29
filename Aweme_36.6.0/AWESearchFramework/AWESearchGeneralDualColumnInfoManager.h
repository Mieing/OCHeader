@class NSMutableArray;

@interface AWESearchGeneralDualColumnInfoManager : NSObject

@property (retain, nonatomic) NSMutableArray *dualColumnSwitchInfoStack;

+ (id)sharedInstance;

- (id)stackTopDualColumnSwitchInfo;
- (id)popDualColumnSwitchInfo;
- (void)pushDualColumnSwitchInfo:(id)a0;
- (void).cxx_destruct;

@end
