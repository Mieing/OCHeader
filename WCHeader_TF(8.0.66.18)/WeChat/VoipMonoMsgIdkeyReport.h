@interface VoipMonoMsgIdkeyReport : NSObject

+ (void)reportId:(int)a0 Key:(int)a1;
+ (void)msgNotifyInvite;
+ (void)msgNotifyCancel;
+ (void)msgNotifyAnswer;
+ (void)msgSyncInvite;
+ (void)msgSyncCancel;
+ (void)logicStartErrorMsgType;
+ (void)logicStartErrorGetRoomInfoCgiRunning;
+ (void)logicStartUIDirectlyOk;
+ (void)logicStartUIDirectlyError;
+ (void)logicStartGetRoomInfoCgi;
+ (void)logicRejectErrorMsgType;
+ (void)logicRejectErrorCancelMsgCannotReject;
+ (void)logicRejectErrorMsgNotVaild;
+ (void)logicRejectNotSyncMsg;
+ (void)logicRejectErrorInviteUserNotExist;
+ (void)logicRejectSendAckBusy;
+ (void)logicCancelErrorMsgType;
+ (void)logicCancelErrorMsgNotCancelMsg;
+ (void)logicCancelErrorMsgNotVaild;
+ (void)logicCancelTypeAnswerHasAccept;
+ (void)logicCancelCloseOk;
+ (void)logicCancelCloseNotMatch;
+ (void)logicGetRoomInfoErrorPara;
+ (void)logicGetRoomInfoErrorCreate;
+ (void)logicGetRoomInfoErrorTimeOut;
+ (void)logicGetRoomInfoErrorRespNull;
+ (void)logicGetRoomInfoErrorRespFail;
+ (void)logicGetRoomInfoRespOk;
+ (void)logicGetRoomInfoOpenUIError;
+ (void)logicGetRoomInfoOpenUIOk;
+ (void)logicUiErrorMsgType;
+ (void)logicUiErrorInviteUserNotExist;
+ (void)logicUiErrorMsgTransformFailed;
+ (void)logicUiErrorPhoneCalling;
+ (void)logicUiErrorInviteType;
+ (void)logicUiOkSyncMsgClosePreConnect;
+ (void)logicUiOkApnsMsgClosePreConnect;
+ (void)logicUiOkPushKitMsgClosePreConnect;
+ (void)logicUiOkNotifyMsgOpenPreConnect;
+ (void)logicUiOkNotifyMsgTimeUnRealClosePreConnect;
+ (void)pushKitReceiveMsg;
+ (void)pushKitFormMsgOkShowNotification;
+ (void)msgSyncInviteInActiveState;
+ (void)receiveIncomingCallUseCallKit;

@end
