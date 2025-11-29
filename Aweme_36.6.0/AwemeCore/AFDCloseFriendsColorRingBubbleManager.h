@class NSArray, NSString, AFDCloseFriendsShowSnackbarHelper;
@protocol AFDCloseFriendsColorRingBubbleManagerDelegate;

@interface AFDCloseFriendsColorRingBubbleManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSArray *allStrategys;
@property (retain, nonatomic) AFDCloseFriendsShowSnackbarHelper *showSnackbarHelper;
@property (weak, nonatomic) id<AFDCloseFriendsColorRingBubbleManagerDelegate> delegate;
@property (nonatomic) BOOL isSkylightViewAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isHitShowNotesBubbleTest;
+ (Class)aAFDServiceDOUYINDSAdapterClass;
+ (BOOL)isHitEnterMomentFeedFromNotesBubbleTest;
+ (BOOL)isHitShowAudioNotesBubbleTest;
+ (BOOL)isHitPublishNotesBubbleTest;
+ (BOOL)isHitShowRemindBubbleTest;
+ (BOOL)isHitAnyBubbleTest;
+ (BOOL)isHitShowStoryTextBubble;

- (void)didFinishLoginWithUid:(id)a0;
- (id)aAFDServiceDOUYINDSAdapter;
- (id)strategyClassArray;
- (BOOL)isShowingRemindBubble;
- (void)skylightViewDidAppear;
- (void)skylightViewDidDisappear;
- (void)dispatchEventToStrategys:(id /* block */)a0;
- (id)getStrategyWithBubbleType:(unsigned long long)a0;
- (void)didClickNotesBubbleWithMomentColorRingInfo:(id)a0;
- (id)getStrategyWithMomentColorRingInfo:(id)a0;
- (id)getRemindStrategyWithMomentColorRingInfo:(id)a0;
- (void)onBubbleViewTappedWithBubbleType:(unsigned long long)a0 momentColorRingInfo:(id)a1;
- (void)willShowBubbleWithBubbleType:(unsigned long long)a0 momentColorRingInfo:(id)a1 isFirstBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
