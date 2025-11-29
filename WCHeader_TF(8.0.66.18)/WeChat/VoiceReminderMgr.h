@class NSString, NSMutableDictionary;

@interface VoiceReminderMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, IMsgExt> {
    NSMutableDictionary *_dicRemindId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onRemindMsgsOpReturn:(id)a0 Event:(unsigned int)a1;
- (void)doRemindMsgsOp:(unsigned int)a0 arrRemindId:(id)a1;
- (BOOL)shouldNotifyRemindMsg:(id)a0;
- (void)onNotifyRemindMsg:(id)a0;
- (void)onVoiceReminderAlertClickDetail:(id)a0;
- (void)onVoiceReminderAlertClickOK:(id)a0;
- (void)onVoiceReminderAlertClick:(id)a0 viewDetail:(BOOL)a1;
- (id)init;
- (void)dealloc;
- (void)deleteRemindMsgs:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void).cxx_destruct;

@end
