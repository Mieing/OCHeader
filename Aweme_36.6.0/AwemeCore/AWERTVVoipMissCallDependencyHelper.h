@class RTVVoipTracker, NSString;
@protocol RxInjector;

@interface AWERTVVoipMissCallDependencyHelper : NSObject <RTVVoipMissCallDependencyHelper>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)isInnerPushEnableForUserID:(id)a0;
- (BOOL)isInnerPushEnable;
- (BOOL)isInnerPushEnableForCid:(id)a0;
- (id)isValidGroupForCid:(id)a0;
- (void)enterConversationDetailVCWithUserID:(id)a0;
- (id)isExistRoomIDForCid:(id)a0;
- (void)enterGroupChatWithCid:(id)a0 autoJoinRoom:(BOOL)a1 roomID:(id)a2 invitees:(id)a3 invokeIfNeed:(BOOL)a4;
- (void).cxx_destruct;

@end
