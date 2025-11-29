@class AWEOpenPlatformAuthFlowManager, NSString, NSDictionary, NSMutableArray, BDImageXUploaderClient;

@interface AWEOpenPlatformVirtualUserManager : NSObject <BDImageXUploadClientDelegate>

@property (weak, nonatomic) AWEOpenPlatformAuthFlowManager *flowManager;
@property (retain) BDImageXUploaderClient *clientTop;
@property (copy, nonatomic) id /* block */ updateAvatarCompletion;
@property (nonatomic) long long maxUserInfoCount;
@property (retain, nonatomic) NSDictionary *imageXtoken;
@property (retain, nonatomic) NSMutableArray *userAuthInfoList;
@property (retain, nonatomic) NSString *lastSaveIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (BOOL)isPrivateAccount;
- (void)updateUserInfoDataFromOpenData:(id)a0;
- (void)updateGrantedItemWithIdentityID:(id)a0;
- (void)requestImageTokenWithCompletion:(id /* block */)a0;
- (BOOL)isOpenExperiment;
- (id)generateUserInfoListFromOpenData:(id)a0;
- (void)removeVirtualUserInfo:(id)a0 WithCompletion:(id /* block */)a1;
- (void)getRandomVirtualUserInfoWithCompletion:(id /* block */)a0;
- (void)updateAvatar:(id)a0 WithCompletion:(id /* block */)a1;
- (void)saveVirtualUserInfo:(id)a0 WithCompletion:(id /* block */)a1;
- (void)reportIdentityWithCompletion:(id /* block */)a0;
- (void)updateNewestUserAuthInfoListWithCompletion:(id /* block */)a0;
- (void)updateGrantedItem:(id)a0;
- (BOOL)shouldShowAddNewVirtualInfoEntrance;
- (void)updateImageToken;
- (id)getVirtualUserTrackerParams;
- (void).cxx_destruct;
- (id)initWithFlowManager:(id)a0;

@end
