@class NSString;

@interface BDXBridgeAuthLynxSettings : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) unsigned long long signVerifyMode;
@property (readonly, nonatomic) BOOL enableJsbAuth;
@property (readonly, nonatomic) BOOL enablejsbCallLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
