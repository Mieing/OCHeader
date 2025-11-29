@class NSArray, NSMutableArray;

@interface WCLiveBlurPowerModeAdjustParamConfigMgr : NSObject

@property (retain, nonatomic) NSMutableArray *mutaAdjustStrategyParamList;
@property (retain, nonatomic) NSMutableArray *mutaAdjustStrategyParamLevelList;
@property (readonly, nonatomic) NSArray *adjustStrategyParamList;
@property (readonly, nonatomic) NSArray *adjustStrategyParamLevelList;

+ (id)shareInstance;

- (id)init;
- (void)initDefaultData;
- (void).cxx_destruct;

@end
