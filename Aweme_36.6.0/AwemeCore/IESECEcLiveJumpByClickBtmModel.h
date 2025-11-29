@class NSString, NSDictionary;

@interface IESECEcLiveJumpByClickBtmModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcm;
@property (copy, nonatomic) NSString *containerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
