@class NSString, NSArray;

@interface BDHybridCoreReporterFilter : NSObject

@property (retain, nonatomic) NSString *aid;
@property (retain, nonatomic) NSArray *serviceList;
@property (nonatomic) BOOL clearAllServiceWithAid;

- (BOOL)isAimedAid:(id)a0;
- (BOOL)isAimedService:(id)a0;
- (BOOL)canFilterWithDic:(id)a0 forService:(id)a1;
- (void).cxx_destruct;

@end
