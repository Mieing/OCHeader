@class LynxUI, NSString, LynxAnimationInfo, CADisplayLink, PauseTimeHelper, LynxKeyframeParsedData, NSMutableDictionary, LynxAnimationDelegate;

@interface LynxKeyframeAnimator : NSObject {
    LynxKeyframeParsedData *_keyframeParsedData;
    double _keyframeStartTime;
    NSMutableDictionary *_internalAnimators;
    PauseTimeHelper *_pauseTimeHelper;
    LynxAnimationDelegate *_delegate;
    CADisplayLink *_displayLink;
}

@property (class, readonly) NSString *kTransformStr;
@property (class, readonly) NSString *kOpacityStr;
@property (class, readonly) NSString *kBackgroundColorStr;

@property (retain, nonatomic) LynxAnimationInfo *info;
@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) LynxUI *ui;
@property (retain, nonatomic) NSMutableDictionary *propertyOriginValue;
@property (nonatomic) BOOL autoResumeAnimation;

- (void)notifyBGLayerAdded;
- (id)initWithUI:(id)a0;
- (BOOL)isPercentTransform;
- (void)initAnimationDelegate;
- (BOOL)shouldReInitTransform;
- (void)applyAnimationInfo:(id)a0;
- (void)sendCancelEvent;
- (void)removeAllAnimationFromLayer:(id)a0;
- (void)restoreLayerStyles:(id)a0;
- (void)tryToResumeAnimation:(id)a0;
- (void)tryToResumeAnimationOnNextFrame;
- (id)recordPresentationLayerStyles;
- (BOOL)isAnimationExpired:(id)a0;
- (void)addAnimationToLayer:(id)a0 name:(id)a1 animator:(id)a2;
- (id)getKeyframeEndStyles;
- (BOOL)shouldPerformRotateZInMatrix:(id)a0;
- (void)prepareKFValuesAndTimesContainer:(id)a0;
- (id)recordLayerStyles;
- (void)parseKeyframes:(id)a0;
- (void)addOpacityAnimationToLayer:(id)a0 name:(id)a1 animator:(id)a2;
- (void)notifyPropertyUpdated:(id)a0 value:(id)a1;
- (void)detachFromUI;
- (void)attachToUI:(id)a0;
- (void)resume:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)apply:(id)a0;
- (void)destroy;
- (void)finish;
- (void)pause:(id)a0;
- (void)run;
- (void)dealloc;
- (void)cancel;

@end
