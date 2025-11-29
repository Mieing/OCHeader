@class NSString;

@interface IESECAddressServiceRuleListRuleListNode : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long curType;
@property (nonatomic) unsigned long long preType;
@property (nonatomic) long long strategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
