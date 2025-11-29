@class NSMutableDictionary;

@interface AWELeftSideBarBasePerfCostInfosModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *costDic;

- (void)setCostTime:(double)a0 withCostKey:(id)a1;
- (double)getCostTimeByKey:(id)a0;
- (id)getCostInfoString;
- (void).cxx_destruct;
- (id)init;

@end
