@class AWELuckyCatPendantDescTemplate, AWELuckyCatPendantBackground, AWELuckyCatPendantFrequencyControl, NSString, AWELuckyCatPendantClickEvent, NSDictionary, AWELuckyCatPendantAnimate;

@interface AWELuckyCatPendantBubble : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long marginTop;
@property (retain, nonatomic) AWELuckyCatPendantAnimate *pendantAnimate;
@property (retain, nonatomic) AWELuckyCatPendantDescTemplate *title;
@property (retain, nonatomic) AWELuckyCatPendantDescTemplate *subTitle;
@property (retain, nonatomic) AWELuckyCatPendantBackground *background;
@property (retain, nonatomic) AWELuckyCatPendantFrequencyControl *frequencyControl;
@property (copy, nonatomic) NSString *bubbleType;
@property (nonatomic) BOOL removeInterruptCapsuleAfterClick;
@property (retain, nonatomic) AWELuckyCatPendantClickEvent *clickEvent;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
