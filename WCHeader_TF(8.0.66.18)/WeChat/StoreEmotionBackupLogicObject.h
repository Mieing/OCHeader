@class NSArray, NSString, StoreEmotionUploadMyPanelListCgi;
@protocol StoreEmotionBackupLogicObjectDelegate;

@interface StoreEmotionBackupLogicObject : MMObject <StoreEmotionUploadMyPanelListCgiDelegate>

@property (retain, nonatomic) StoreEmotionUploadMyPanelListCgi *uploadCgi;
@property (weak, nonatomic) id<StoreEmotionBackupLogicObjectDelegate> delegate;
@property (retain, nonatomic) NSArray *needUploadPids;
@property (nonatomic) BOOL m_isActive;
@property (nonatomic) BOOL m_hasStartLogic;
@property (nonatomic) BOOL stopFileMagration;
@property (readonly, nonatomic) BOOL hasCheckFileExist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)startLogicWithNeedCheckFileExist:(BOOL)a0;
- (BOOL)isActive;
- (void)asyncCheckFileExist;
- (void)onCheckFileExistFinished;
- (BOOL)checkFileExistWithEmoticonList:(id)a0 needCheckThumb:(BOOL)a1;
- (void)startInternalLogic;
- (BOOL)canStartCgiNow;
- (BOOL)checkIfNeedBackup;
- (id)getStoreEmotionList;
- (void)onStoreEmotionUploadMyPanelListCgiOk;
- (void)onStoreEmotionUploadMyPanelListCgiFailed;
- (void).cxx_destruct;

@end
