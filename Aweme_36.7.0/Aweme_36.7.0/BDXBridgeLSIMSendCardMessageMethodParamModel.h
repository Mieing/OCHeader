@class NSString;

@interface BDXBridgeLSIMSendCardMessageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardBizType;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *staticData;
@property (copy, nonatomic) NSString *bizKey;
@property (copy, nonatomic) NSString *cardTrackData;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
