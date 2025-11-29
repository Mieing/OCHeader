@class NSNumber, NSString;

@interface BDXBridgeCloseImBulletCardMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *locationType;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *serverMessageId;
@property (copy, nonatomic) NSString *messageId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
