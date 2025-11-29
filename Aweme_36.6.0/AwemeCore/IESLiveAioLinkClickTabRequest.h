@class NSDictionary, NSString;

@interface IESLiveAioLinkClickTabRequest : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) int tabIndex;
@property (nonatomic) int tabType;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) int orderRule;
@property (nonatomic) long long relatedTopicId;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
