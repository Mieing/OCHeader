@class NSString, AWEIMChatRecommendVideoTagModel, NSDictionary;

@interface AWEIMChatRecommendVideoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *coverURL;
@property (retain, nonatomic) AWEIMChatRecommendVideoTagModel *tag;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
