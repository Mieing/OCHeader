@class NSString, NSMutableDictionary, TIMXSDKInstance;

@interface TIMXECOMGetUserMessageMarkerStore : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *unreadReportDict;
@property (retain, nonatomic) NSMutableDictionary *getUserMessagePullingStateDict;
@property (retain, nonatomic) NSMutableDictionary *userMessageHasPendingPullingDict;
@property (retain, nonatomic) NSMutableDictionary *userMessagePendingPullingReasonDict;
@property BOOL getOpenConversationsPullingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)getUserMessageInitStatusWithInbox:(long long)a0 rootObject:(id)a1;
+ (long long)getUserMessageNextCMDIndexWithInbox:(long long)a0 rootObject:(id)a1;
+ (void)setUserMessageNextCMDIndex:(long long)a0 inbox:(long long)a1 rootObject:(id)a2;
+ (long long)getUserMessageStartConversationVersionWithInbox:(long long)a0 rootObject:(id)a1;
+ (void)setUserMessageStartConversationVersion:(long long)a0 inbox:(long long)a1 rootObject:(id)a2;
+ (long long)getUserMessageReadInfoVersionWithInbox:(long long)a0 rootObject:(id)a1;
+ (void)setUserMessageReadInfoVersion:(long long)a0 inbox:(long long)a1 rootObject:(id)a2;
+ (id)getUserMessageInitStartInitVsersionWithInbox:(long long)a0 rootObject:(id)a1;
+ (long long)getUserMessageInitPageWithInbox:(long long)a0 rootObject:(id)a1;
+ (void)setUserMessageInitPage:(long long)a0 inbox:(long long)a1 rootObject:(id)a2;
+ (void)setUserMessageInitStartInitVsersion:(long long)a0 inbox:(long long)a1 rootObject:(id)a2;
+ (void)setUserMessageInitStatus:(unsigned long long)a0 inbox:(long long)a1 rootObject:(id)a2;
+ (id)conversationVersionKeyForInbox:(int)a0 rootObject:(id)a1;
+ (id)readInfoVersionKeyForInbox:(long long)a0 rootObject:(id)a1;
+ (id)cmdMessageIndexKeyForInbox:(int)a0 rootObject:(id)a1;
+ (id)kvLocationCursorKey:(long long)a0 rootObject:(id)a1;
+ (id)pullerInitStatusKey:(long long)a0 rootObject:(id)a1;
+ (id)kvFetchInitPageKey:(long long)a0 rootObject:(id)a1;
+ (void)setDeletedConversationIndex:(id)a0 minIndex:(id)a1 rootObject:(id)a2;
+ (id)getDeletedConversationIndex:(id)a0 rootObject:(id)a1;

- (BOOL)getHasReportUnreadWithInbox:(long long)a0;
- (void)setHasReportUnread:(BOOL)a0 inbox:(long long)a1;
- (BOOL)getUserMessageStartPullingStateWithInbox:(long long)a0;
- (void)setUserMessageStartPullingState:(BOOL)a0 inbox:(long long)a1;
- (BOOL)getUserMessageHasPendingPullingWithInbox:(long long)a0;
- (void)setUserMessageHasPendingPulling:(BOOL)a0 inbox:(long long)a1;
- (long long)getUserMessagePendingPullingReasonWithInbox:(long long)a0;
- (void)setUserMessagePendingPullingReason:(long long)a0 inbox:(long long)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
