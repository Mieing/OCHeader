@class NSMutableDictionary, NSString, UIView, NSMutableArray, NSLock;
@protocol IESLiveBubbleGuide;

@interface IESLiveCommonDotAndBubbleServiceIMP : IESLiveGeneralBaseService <IESLiveCommonDotAndBubbleService>

@property (retain, nonatomic) NSMutableArray *bubbleArray;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipView;
@property (retain, nonatomic) NSMutableDictionary *delayShowedBubbles;
@property (nonatomic) BOOL isDisplayingBubble;
@property (retain, nonatomic) NSLock *bubbleLock;
@property (retain, nonatomic) NSLock *delayBubbleLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)removeAllBubbles;
- (BOOL)shouldShowBubble:(id)a0;
- (void)showBubbleView;
- (BOOL)shouldShowRedDot:(id)a0 subRedDots:(id)a1;
- (void)redDotDidShowed:(id)a0 isClick:(BOOL)a1;
- (void)showBubble:(id)a0 inView:(id)a1 atTopOf:(id)a2;
- (void)showBubble:(id)a0 inView:(id)a1 atTopOf:(id)a2 realShowBlock:(id /* block */)a3;
- (id)currentBubbleInfo;
- (void)removeCurrentBubble;
- (void)showSingleBubble:(id)a0 path:(id)a1 inView:(id)a2 atTopOf:(id)a3 realShowBlock:(id /* block */)a4;
- (BOOL)shouldShowSingleBubble:(id)a0 path:(id)a1;
- (void)p_showBubble:(id)a0 path:(id)a1 inView:(id)a2 atTopOf:(id)a3 isFromDelay:(BOOL)a4 realShowBlock:(id /* block */)a5;
- (void)fireShowBubbleView;
- (void)bubbleDidShowed:(id)a0 path:(id)a1 isClick:(BOOL)a2;
- (void).cxx_destruct;

@end
