@class NSString;

@interface AWEPerfEvaluateSolariaCollector : NSObject <AWEPerfEvaluateCollector>

@property (readonly, copy, nonatomic) NSString *subType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectFeatures;
- (id)initWithJSONConfig:(id)a0;
- (id)generateCompatibleConfig;
- (void).cxx_destruct;

@end
