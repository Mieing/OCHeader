@class NSArray, NSString, NSDictionary;

@interface AWEEcomAISearchSSEMessageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *data;
@property (copy, nonatomic) NSString *searchUniqueId;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSDictionary *logPb;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *nextKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
