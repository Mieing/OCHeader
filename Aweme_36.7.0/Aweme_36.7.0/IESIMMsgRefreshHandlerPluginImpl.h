@class NSString;

@interface IESIMMsgRefreshHandlerPluginImpl : NSObject <IESIMMsgRefreshHandlerPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)fetchGroupExchangeInfoWithBatchIDSet:(id)a0 forceRequest:(BOOL)a1 conversation:(id)a2;
- (id)customRefreshHandlersToRegisterWithComponentCenter:(id)a0;
- (id)customRefreshHandlersToRegisterWithConversationContext:(id)a0;
- (id)customCombineShareRefreshHandlersWithComponentCenter:(id)a0;
- (id)customCombineShareRefreshHandlersWithConversationContext:(id)a0;
- (BOOL)supportDSPMusicMsgRefresh;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
