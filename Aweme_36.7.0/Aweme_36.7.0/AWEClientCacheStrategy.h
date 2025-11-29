@interface AWEClientCacheStrategy : AWEBaseApiModel

@property (nonatomic) unsigned long long action;
@property (nonatomic) long long operationReason;

+ (id)actionReasonJSONTransformer;
+ (id)operationReasonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
