@class AWEAlertCallbackWrapper, NSString, AWEAwemeModel;
@protocol AFDStory25ViewedViewerGuideAnimationDelegate;

@interface AFDStory25ViewedViewerGuideAnimation : NSObject <AFDStroyDiverseDiggGuideAnimationDelegate, AFDStory25ViewedViewerGuideAnimationProtocol>

@property (weak, nonatomic) id<AFDStory25ViewedViewerGuideAnimationDelegate> delegate;
@property (retain, nonatomic) AWEAlertCallbackWrapper *callbackWrapper;
@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupShownItemIDsSet;
+ (BOOL)hasAFDStory25ViewedViewerGuideAnimationWithItemID:(id)a0;
+ (void)cancelCurrentAnimationIfNeeded;
+ (void)clearShowItemIDs;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;

@end
