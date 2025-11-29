@class NSString, ACCAIGCTaskRetryDetailModel, ACCAIGCLoraInfoModel;

@interface ACCAIGCCreateLoraModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) ACCAIGCLoraInfoModel *loraInfo;
@property (retain, nonatomic) ACCAIGCTaskRetryDetailModel *retryDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)retryDetailJSONTransformer;
+ (id)loraInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
