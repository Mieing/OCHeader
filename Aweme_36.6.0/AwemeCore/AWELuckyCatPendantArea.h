@class AWELuckyCatPendantBackground, NSString, AWELuckyCatPendantAnimate, AWELuckyCatPendantExtendArea, AWELuckyCatPendantClickEvent, NSDictionary, AWELuckyCatPendantBubble, AWELuckyCatPendantDescTemplate;

@interface AWELuckyCatPendantArea : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELuckyCatPendantAnimate *pendantAnimate;
@property (retain, nonatomic) AWELuckyCatPendantExtendArea *pendantExtendArea;
@property (retain, nonatomic) AWELuckyCatPendantBackground *background;
@property (retain, nonatomic) AWELuckyCatPendantDescTemplate *title;
@property (retain, nonatomic) AWELuckyCatPendantBubble *pendantBubble;
@property (retain, nonatomic) AWELuckyCatPendantBubble *interruptCapsule;
@property (retain, nonatomic) AWELuckyCatPendantBubble *pendantCapsule;
@property (nonatomic) BOOL removeInterruptCapsuleAfterClick;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) long long priority;
@property (retain, nonatomic) AWELuckyCatPendantClickEvent *clickEvent;
@property (copy, nonatomic) NSString *showScene;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSDictionary *extraDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraDicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
