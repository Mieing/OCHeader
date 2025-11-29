@class NSString, UIView;
@protocol MMEasterEggEffectDelegate;

@interface MMEasterEggEffect : NSObject <MMEasterEggEffect>

@property (weak, nonatomic) id<MMEasterEggEffectDelegate> delegate;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *sceneId;
@property (retain, nonatomic) UIView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRunning;
- (BOOL)startEffectWithExtInfo:(id)a0;
- (void)continueEffectWithInteractiveUI:(id)a0;
- (void)endEffectWithReason:(unsigned int)a0;
- (void).cxx_destruct;

@end
