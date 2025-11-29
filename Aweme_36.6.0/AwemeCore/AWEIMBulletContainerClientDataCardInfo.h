@class NSString;

@interface AWEIMBulletContainerClientDataCardInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardKey;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *cardID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)configDataWithDynamicPatchModel:(id)a0;
- (void).cxx_destruct;

@end
