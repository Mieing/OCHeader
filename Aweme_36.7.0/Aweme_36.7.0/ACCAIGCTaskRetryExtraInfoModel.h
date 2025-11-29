@class NSString, NSArray;

@interface ACCAIGCTaskRetryExtraInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *retryTaskID;
@property (copy, nonatomic) NSString *reqJson;
@property (copy, nonatomic) NSArray *imageResourceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageResourceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
