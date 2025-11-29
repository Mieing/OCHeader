@class NSString, ExtDeviceNativeUtilCallback;

@interface AffExtDeviceNativeUtilImpl : NSObject <ExtDeviceNativeUtilBase>

@property (retain) ExtDeviceNativeUtilCallback *curCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAllowPushWhenExtDeviceOnline;
- (void)setAllowPushWhenExtDeviceOnline:(BOOL)a0;
- (void)handleCommonErrorMsg:(int)a0 errorMsg:(id)a1;
- (void)updateDeviceInfos;
- (id)getSessionList:(int)a0;
- (void)onConfirmLoginDevice:(int)a0 syncChat:(BOOL)a1 clientVersion:(int)a2 msgContextPubKey:(id)a3 syncRecordCtx:(id)a4;
- (void)getChatPackageAsync:(unsigned long long)a0 conversationId:(id)a1 fromTime:(unsigned long long)a2 toTime:(unsigned long long)a3 offset:(unsigned long long)a4 limit:(int)a5;
- (void)getAllConversationListAsync:(unsigned long long)a0;
- (void)setCallback:(id)a0;
- (id)getCurrentUserName;
- (unsigned long long)getCurrentTimeMs;
- (void)sendSyncStatusNotifyAsync:(unsigned long long)a0 funcName:(id)a1 args:(id)a2;
- (void).cxx_destruct;

@end
