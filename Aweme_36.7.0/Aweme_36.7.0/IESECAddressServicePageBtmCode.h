@class NSString;

@interface IESECAddressServicePageBtmCode : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *live;
@property (copy, nonatomic) NSString *mall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
