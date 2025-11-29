@class NSArray, NSDictionary, NSString;

@interface IESLiveAioLinkObserveTabListResponse : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *tabList;
@property (retain, nonatomic) NSDictionary *searchConfig;
@property (copy, nonatomic) NSDictionary *aiAgentConfig;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
