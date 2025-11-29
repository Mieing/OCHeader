@class NSNumber, NSDictionary, NSString;

@interface BDXBridgeOpenImBulletContainerMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *openMode;
@property (retain, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSDictionary *imDynamicPatch;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSNumber *shouldForbidMsgScroll;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
