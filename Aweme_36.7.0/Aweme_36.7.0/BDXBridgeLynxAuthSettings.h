@class NSString;

@interface BDXBridgeLynxAuthSettings : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long signVerifyMode;
@property (nonatomic) BOOL enableJsbAuth;
@property (nonatomic) BOOL enablejsbCallLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
