@class NSString, NSDictionary, NSNumber, AWEBaseResponseExtraModel;

@interface AWEBaseResponseModel : AWERootModel

@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) AWEBaseResponseExtraModel *responseExtraModel;

+ (id)awesonic_modelWithData:(id)a0 error:(id *)a1;
+ (id)modelWithJSONDictionary:(id)a0;
+ (id)awesonicmonitor_modelWithData:(id)a0 error:(id *)a1;
+ (void)_aweLazyRegisterLoad_AWEMonitor;
+ (id)propertyToOptionsMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void)awe_mergeRequestId:(id)a0 logPassback:(id)a1;
- (void)awe_mergeRequestIdAndLogPassback;
- (void).cxx_destruct;

@end
