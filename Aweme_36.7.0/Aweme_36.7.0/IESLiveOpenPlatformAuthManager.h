@class HTSEventContext, NSString, NSMutableDictionary, IESLiveComponentContext, NSObject, NSLock;
@protocol IESLiveRoomService, OS_dispatch_queue;

@interface IESLiveOpenPlatformAuthManager : NSObject <IESLiveOpenPlatformAuthManagerInterface>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) NSString *currentAppId;
@property (copy, nonatomic) NSString *currentUid;
@property (retain, nonatomic) NSMutableDictionary *authDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSLock *authLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)addLoginObserver;
- (void)loadAuthInfoWithAppId:(id)a0;
- (void)setScopeAuth:(long long)a0 scopeName:(id)a1 appId:(id)a2 completion:(id /* block */)a3;
- (long long)getScopeAuthScopeName:(id)a0 appId:(id)a1;
- (id)getAllAppIdScopeAuthWithAppId:(id)a0;
- (id)queryAllAppIdScopeAuthWithAppId:(id)a0;
- (id)scopeTrackNameWithScopeName:(id)a0;
- (id)initWithRoom:(id)a0 componentContext:(id)a1 eventContext:(id)a2;
- (void)loadAuthInfoWithUid:(id)a0;
- (void)loadAuthInfoIfNeed;
- (void).cxx_destruct;

@end
