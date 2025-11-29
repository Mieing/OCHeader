@class NSRecursiveLock, NSString, NSMutableSet, EmoticonDataDB, EmoticonSendRecordList;

@interface CEmoticonMgr : MMUserService <MMServiceProtocol, MMResPackageMgrExt, MMConfigMgrExt>

@property (retain, nonatomic) NSMutableSet *savingCustomEmotThumbs;
@property (retain, nonatomic) NSRecursiveLock *saveThumbsLock;
@property (retain, nonatomic) EmoticonSendRecordList *recordList;
@property (readonly, nonatomic) EmoticonDataDB *emoticonDataDB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)CustomOrCameraEmoticonFirstSyncLimit;
+ (unsigned int)CustomOrCameraEmoticonManualSyncLimit;
+ (unsigned int)CustomEmoticonLimit;
+ (unsigned int)CameraEmoticonLimit;
+ (BOOL)IsEmoticonImageExist:(id)a0;
+ (void)notifyEmoticonListUpdatedFor:(unsigned long long)a0;
+ (id)GetEmoticonByMD5:(id)a0;
+ (id)emoticonMsgForImageData:(id)a0 errorMsg:(id *)a1;
+ (id)emoticonMsgForEmoticonWrap:(id)a0 imageData:(id)a1 errorMsg:(id *)a2;
+ (id)errorMsgForEmoticonImageData:(id)a0;
+ (id)genEmoticonMsgForEmoticonWrap:(id)a0 imageData:(id)a1;
+ (id)getEmoticonImageByMD5:(id)a0;
+ (id)getEmoticonImageForEditByMD5:(id)a0 isStore:(BOOL)a1;
+ (BOOL)isSelfieEmoticonWithWrap:(id)a0;
+ (void)ReportAddEmoticonWithAddEmoticonWrap:(id)a0 failedReason:(id)a1;
+ (unsigned int)getIdKeyIdEmoticon;
+ (unsigned int)getIdKeyResolutionLimit;
+ (id)genSafeEmoticonImage:(id)a0;
+ (BOOL)isTusijiEmoticonMD5:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)loadDB;
- (void)downloadTusijiResInMainThread;
- (void)configWxAMEnableSetting;
- (void)AddHardCode:(id)a0 Type:(unsigned int)a1 GameType:(unsigned int)a2 OriginPath:(id)a3 packageId:(id)a4;
- (void)hardcodeTusiji;
- (void)InitLocalList;
- (void)copyPic:(id)a0 fromResource:(id)a1;
- (id)GetEmoticonList;
- (id)checkAndSaveEmoticon:(id)a0 addEmotionWrap:(id)a1;
- (BOOL)AddEmoticonSilently:(id)a0 Type:(unsigned int)a1 packageId:(id)a2 Source:(int)a3 Index:(unsigned int)a4;
- (id)AddCustomEmoticonWithData:(id)a0 addEmoticonWrap:(id)a1 isSilently:(BOOL)a2;
- (id)AddEmoticonWithData:(id)a0 addEmoticonWrap:(id)a1 extFlag:(unsigned int)a2 index:(id)a3 isSilently:(BOOL)a4;
- (void)DeleteEmoticonByMd5List:(id)a0 ofType:(unsigned long long)a1;
- (BOOL)DeleteEmoticonFromCustomListByMd5:(id)a0;
- (BOOL)DeleteEmoticonFromCameraListByMd5:(id)a0;
- (BOOL)deleteEmoticonByPid:(id)a0 isSilently:(BOOL)a1 needRemoveFile:(BOOL)a2;
- (BOOL)IsJsbOrDiceEmoticonMd5:(id)a0;
- (BOOL)CheckEmoticonExist:(id)a0;
- (BOOL)CheckEmoticonExistInCustomListByMd5:(id)a0;
- (void)willRecoverDatabase;
- (void)onResPackageReady:(id)a0;
- (id)updatedEmoticonArrayForGame:(id)a0;
- (id)getEmoticonWrapByMd5:(id)a0;
- (id)getEmoticonListByPackageId:(id)a0;
- (id)getCustomEmoticonListWithOutGame;
- (id)getCameraEmoticonList;
- (BOOL)updateEmoticon:(id)a0 usedTime:(unsigned int)a1;
- (id)lastestSentMd5InMd5list:(id)a0;
- (id)FilterNotInDBList:(id)a0;
- (BOOL)updateEmoticon:(id)a0 packageId:(id)a1;
- (id)getRecentUsedEmoticonList:(unsigned int)a0;
- (BOOL)checkEmoticonCanAddStrictWay:(BOOL)a0 Md5:(id)a1 pid:(id)a2;
- (BOOL)checkEmoticonCanAddWithMd5:(id)a0 pid:(id)a1;
- (void)onMMDynamicConfigUpdated;
- (void)trySaveCustomThumbImageWithImg:(id)a0 md5:(id)a1;
- (void)addRecordWithMessageWrap:(id)a0;
- (void)delRecordWithMd5:(id)a0;
- (void)delAllRecord;
- (BOOL)isEmoticonInRecordFor:(id)a0;
- (id)allRecentSendEmoticonInOrder;
- (void).cxx_destruct;

@end
