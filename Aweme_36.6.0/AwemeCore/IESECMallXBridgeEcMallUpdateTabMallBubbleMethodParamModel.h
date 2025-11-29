@class NSString, NSNumber;

@interface IESECMallXBridgeEcMallUpdateTabMallBubbleMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL needShow;
@property (copy, nonatomic) NSString *bubbleComponentID;
@property (copy, nonatomic) NSString *bubbleIcon;
@property (copy, nonatomic) NSString *bubbleText;
@property (retain, nonatomic) NSNumber *bubbleDuration;
@property (retain, nonatomic) NSNumber *bubbleType;
@property (retain, nonatomic) NSNumber *bubbleSubType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
