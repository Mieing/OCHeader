@class NSString, NSDictionary, NSArray, AWEECShoppingGuideChatPatchModel;

@interface AWEECShoppingGuideChatResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) long long chunkIndex;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSDictionary *message;
@property (retain, nonatomic) AWEECShoppingGuideChatPatchModel *messagePatch;
@property (copy, nonatomic) NSArray *sug;
@property (nonatomic) long long streamTime;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
