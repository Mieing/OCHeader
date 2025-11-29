@class NSString, NSMutableDictionary;

@interface GameStatMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    BOOL _appInfoExtendLoaded;
}

@property (nonatomic) unsigned int networkType;
@property (retain, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSMutableDictionary *gameLaunchTime;
@property (retain, nonatomic) NSMutableDictionary *gameDescSDK;
@property (retain, nonatomic) NSMutableDictionary *dictScene2LayerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genExternInfoWithNoticeID:(id)a0;
+ (id)genExternInfoWithNoticeID:(id)a0 withNew:(BOOL)a1 sourceScene:(int)a2;

- (id)init;
- (void)dealloc;
- (void)initScene2LayerID;
- (void)startStatAppInfoExtend;
- (void)endStatAppInfoExtend;
- (void)statShowTimeLineMessage:(id)a0;
- (void)statShowConversation:(id)a0;
- (void)statShowInAD:(id)a0 index:(unsigned int)a1;
- (void)statClickInConversation:(id)a0;
- (void)statClickInConversation:(id)a0 OpType:(int)a1 ExternInfo:(id)a2;
- (void)statClickTimeLineMessage:(id)a0 isSource:(BOOL)a1;
- (void)statClickTimeLineTail:(id)a0 opType:(int)a1 ExternInfo:(id)a2 SceneType:(int)a3;
- (void)statTimeLinePlaySight:(id)a0 opType:(int)a1 ExternInfo:(id)a2;
- (void)statLoadMoreGameMsgs;
- (void)statRefuseMsgInConversation:(id)a0 isReceived:(BOOL)a1;
- (void)statRefuseMsgInGameSettingView:(id)a0 isReceived:(BOOL)a1;
- (void)statDeleteMsgInConversation:(id)a0;
- (void)statGameSettingDetailView:(id)a0 isReceived:(BOOL)a1;
- (void)statGameDetailView:(id)a0 sourceScene:(int)a1;
- (void)statGameCenterClickSimple:(id)a0 scenc:(int)a1 opType:(int)a2;
- (void)statGameCenterClickSimpleWithExternField:(id)a0 scenc:(int)a1 opType:(int)a2 noticeID:(id)a3 withNew:(BOOL)a4 sourceScene:(int)a5;
- (void)statGameCenterClickSimpleWithExternField:(id)a0 scenc:(int)a1 opType:(int)a2 noticeID:(id)a3 withNew:(BOOL)a4;
- (void)statGameCenterClickSimpleWithExternField:(id)a0 scenc:(int)a1 opType:(int)a2 msgType:(unsigned int)a3 noticeID:(id)a4 withNew:(BOOL)a5;
- (void)statGameCenterClick:(id)a0 scenc:(int)a1 opType:(int)a2 fromUsrName:(id)a3 msgType:(unsigned int)a4 msgID:(unsigned int)a5 sourceScenc:(int)a6;
- (void)statGameCenterClickAddSubMsgType:(id)a0 scenc:(int)a1 opType:(int)a2 fromUsrName:(id)a3 msgType:(unsigned int)a4 msgID:(unsigned int)a5 sourceScenc:(int)a6 msgSubType:(unsigned int)a7 noticeID:(id)a8;
- (void)gameStatReport:(id)a0 scenc:(int)a1 opType:(int)a2 fromUsrName:(id)a3 msgType:(unsigned int)a4 msgID:(unsigned int)a5 sourceScenc:(int)a6 msgSubType:(unsigned int)a7 giftId:(id)a8 giftUrl:(id)a9 extInfo:(id)a10;
- (void)statDiffAccountShare:(id)a0 appID:(id)a1 withOpID:(unsigned int)a2;
- (void)statGameCenterAppstoreInfo:(id)a0 productIdentifier:(id)a1 errCode:(unsigned int)a2;
- (BOOL)uploadGameReport:(unsigned int)a0 withLogExt:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)isGameForStat:(id)a0;
- (id)convertStr:(id)a0;
- (void)saveAppInfoExtend;
- (BOOL)loadAppInfoExtend;
- (BOOL)writeToFile:(id)a0 data:(id)a1;
- (void)statGameCenterJsapiJump:(int)a0 sourceScene:(int)a1;
- (void).cxx_destruct;

@end
