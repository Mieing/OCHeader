@class NSDictionary, NSString;

@interface IESLiveAioLinkCurrentSelectTab : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) int type;
@property (nonatomic) int position;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
