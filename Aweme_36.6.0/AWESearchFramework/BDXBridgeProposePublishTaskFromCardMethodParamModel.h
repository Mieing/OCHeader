@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeProposePublishTaskFromCardMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sentence;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *tokenType;
@property (copy, nonatomic) NSString *hotSpotSentence;
@property (retain, nonatomic) NSNumber *isAiEffect;
@property (retain, nonatomic) NSNumber *isImageTextTemplate;
@property (copy, nonatomic) NSDictionary *logParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
