@class NSString;

@interface IESECShopCartControlModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *storage;
@property (nonatomic) long long status;
@property (nonatomic) long long slideLatency;
@property (nonatomic) long long slideRemain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
