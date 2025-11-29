@class NSString, NSArray, NSDictionary;

@interface AWEIMChatRecommendVideoResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (nonatomic) unsigned long long displayType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *videos;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
