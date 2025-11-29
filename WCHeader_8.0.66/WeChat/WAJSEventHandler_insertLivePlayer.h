@class NSDictionary, NSString;

@interface WAJSEventHandler_insertLivePlayer : WAJSEventHandler_BaseEvent <IRecordPermissionCheckExt>

@property (retain, nonatomic) NSDictionary *eventDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)realInsertLivePlayer;
- (BOOL)checkCanSetAudioAcitve;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void).cxx_destruct;

@end
