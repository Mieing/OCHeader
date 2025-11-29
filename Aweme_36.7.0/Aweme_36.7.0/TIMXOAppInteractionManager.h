@class NSString, TIMXSDKInstance;

@interface TIMXOAppInteractionManager : NSObject <TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (void)initTrack;
- (void)didEnterConversationList;
- (void)didEnterConversationID:(id)a0;
- (void)didExitConversationID:(id)a0;
- (void)timx_applicationDidEnterBackground;
- (void)timx_applicationWillEnterForeground;
- (BOOL)isConvListVC:(id)a0;
- (BOOL)isConvVC:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
