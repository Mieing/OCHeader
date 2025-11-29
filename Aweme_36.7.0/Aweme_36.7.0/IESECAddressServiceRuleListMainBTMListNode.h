@class NSString, NSArray;

@interface IESECAddressServiceRuleListMainBTMListNode : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isMainPage;
@property (copy, nonatomic) NSArray *nextBtmList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nextBtmListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
