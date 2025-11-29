@class NSString;

@interface IESECLiveComboBuyCardStyleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *rightIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
