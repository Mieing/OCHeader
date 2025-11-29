@class NSArray, NSString, AWEAwemeModel;
@protocol AWEAnchorIntentionalBehaviorDelegate;

@interface AWEAnchorIntentionalBehavior : NSObject <AWEUserMessage>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSArray *handleEventAry;
@property (nonatomic) BOOL hasStartMonitor;
@property (weak, nonatomic) id<AWEAnchorIntentionalBehaviorDelegate> behaviorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)initWithAweme:(id)a0;
- (void)updateAweme:(id)a0;
- (void)addObserverNotification;
- (void)handleFavoriteNotification:(id)a0;
- (void)handleDiggNotification:(id)a0;
- (void)handleCloseShareVCNotification:(id)a0;
- (void)handleShareAwemeNotification:(id)a0;
- (void)handleShareToUseClickedNotification:(id)a0;
- (void)handleCloseCommentNotification:(id)a0;
- (BOOL)p_shouldHandleEventWithEventType:(unsigned long long)a0;
- (BOOL)isOutsideShareWithShareType:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
