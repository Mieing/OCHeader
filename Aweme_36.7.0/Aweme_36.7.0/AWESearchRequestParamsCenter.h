@class NSDictionary, NSMutableDictionary, NSMutableArray;

@interface AWESearchRequestParamsCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *currentProvidersMap;
@property (retain, nonatomic) NSMutableArray *currentProviders;
@property (retain, nonatomic) NSMutableDictionary *getParamsTimeCostMutDic;
@property (readonly, nonatomic) NSDictionary *getParamsTimeCostDic;

- (id)getParamsWithContext:(id)a0;
- (void)registerProviders:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
