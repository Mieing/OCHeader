@class NSString;

@interface IESECAddressServiceAddressPageBtmNode : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
