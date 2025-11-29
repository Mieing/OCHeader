@class NSString;

@interface AWEECShoppingAIGuideEventParamModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterBotMethod;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
