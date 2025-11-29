@class NSString, NSDictionary;

@interface AWEIMChatRecommendVideoTagModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSString *bgColor;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
