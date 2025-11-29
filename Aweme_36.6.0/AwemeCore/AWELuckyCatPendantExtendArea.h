@class AWELuckyCatPendantDescTemplate, NSString, AWELuckyCatPendantFrequencyControl, AWELuckyCatPendantClickEvent, AWELuckyCatPendantAnimate;

@interface AWELuckyCatPendantExtendArea : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *extendType;
@property (nonatomic) long long textMargin;
@property (retain, nonatomic) AWELuckyCatPendantDescTemplate *title;
@property (retain, nonatomic) AWELuckyCatPendantDescTemplate *subTitle;
@property (retain, nonatomic) AWELuckyCatPendantAnimate *pendantAnimate;
@property (retain, nonatomic) AWELuckyCatPendantFrequencyControl *frequencyControl;
@property (nonatomic) long long style;
@property (nonatomic) long long secondsCountDown;
@property (retain, nonatomic) AWELuckyCatPendantClickEvent *clickEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
