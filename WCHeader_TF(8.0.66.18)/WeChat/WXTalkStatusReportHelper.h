@interface WXTalkStatusReportHelper : MMObject <PBMessageObserverDelegate> {
    unsigned int _openWXTalkModeTime;
    unsigned int _startTalkingTime;
    unsigned int _startGetMicTime;
    unsigned int _getMicCount;
    unsigned int _getMicSucCount;
    unsigned int _getMicFailCount;
    double _openModeUseTime;
    double _openModeAndOpenEngineUsedTime;
    unsigned int _openModeResult;
    unsigned int _totalTalkingTime;
    double _getMicTotalTime;
    unsigned int _sendInviteTimes;
    unsigned int _offlineReConnectTimes;
    unsigned int _changeNetWorkReConTimes;
    unsigned int _isEngineError;
    unsigned int _getRoomMemberCGI;
    unsigned int _systemMsgErrorCount;
    unsigned int _isBeKickedOut;
    int _errCode;
    int _talkingTimeDistributed[10];
    BOOL _getMicResult;
    BOOL _isGettingMic;
}

- (void)resetData;
- (id)genReportLog:(id)a0 RoomId:(int)a1 RoomKey:(long long)a2;
- (void)LogReportOpenWXTalkMode;
- (void)sendStatusReportRequest:(id)a0;
- (void)LogReportCloseWXTalkMode:(id)a0 RoomName:(id)a1 RoomId:(int)a2 RoomKey:(long long)a3;
- (void)LogReportOpenWXTalkModeResult:(BOOL)a0;
- (void)LogReportGetMic;
- (void)LogReportGetMicResult:(BOOL)a0;
- (void)distributeTalkingTime:(int)a0;
- (void)LogReportGiveupMic;
- (void)LogReportWXTalkInvite;
- (void)LogReportOfflineReConnect;
- (void)LogReportChangeNetWorkReConnect;
- (void)LogReportEngineError;
- (void)LogReportSystemMsgError;
- (void)LogReportBeKickedOut;
- (void)LogReportOpenEngineOk;
- (void)LogReportErrorCode:(int)a0;
- (void)handleWXTalkStatReportResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
