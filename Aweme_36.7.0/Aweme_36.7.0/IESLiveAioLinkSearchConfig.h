@class NSString, NSDictionary;

@interface IESLiveAioLinkSearchConfig : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL closeGiftPanel;
@property (nonatomic) BOOL isNormalSearch;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
