@class NSString, AWEPOIAnchorBubbleDisplayTime, AWEPOIFrequencyControlModel;

@interface AWEPOIAnchorBubbleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *bubbleColor;
@property (retain, nonatomic) AWEPOIFrequencyControlModel *frequencyControl;
@property (retain, nonatomic) AWEPOIAnchorBubbleDisplayTime *displayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
