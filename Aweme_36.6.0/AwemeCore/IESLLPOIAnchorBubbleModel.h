@class NSString, IESLLPOIFrequencyControlModel, IESLLPOIAnchorBubbleDisplayTime;

@interface IESLLPOIAnchorBubbleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *bubbleColor;
@property (retain, nonatomic) IESLLPOIFrequencyControlModel *frequencyControl;
@property (retain, nonatomic) IESLLPOIAnchorBubbleDisplayTime *displayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
