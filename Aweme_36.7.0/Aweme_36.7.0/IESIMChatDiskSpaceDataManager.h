@class NSString, NSMutableArray;

@interface IESIMChatDiskSpaceDataManager : NSObject <IESIMChatDiskSpaceDataService, IESIMUserServiceMessage>

@property (nonatomic) long long totalChatDiskSize;
@property (retain, nonatomic) NSMutableArray *originViewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_deleteFileWithFilePaths:(id)a0 completion:(id /* block */)a1;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)conversationDataManager;
- (void)calculateTotalChatDiskSize:(id /* block */)a0;
- (id)chatDiskManageTitle;
- (id)chatDiskManageSubtitle;
- (void)fetchDiskSpaceDataWithCompletion:(id /* block */)a0;
- (void)deleteConversations:(id)a0 size:(long long)a1 completion:(id /* block */)a2;
- (void)deleteAttachmentsWithCids:(id)a0 fileTypes:(id)a1 size:(long long)a2 completion:(id /* block */)a3;
- (void)updateTotalChatDiskSizeAfterDeleteSize:(long long)a0;
- (void)calculateTotalChatDiskSizeWithCheckedLaunch:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)resetData;
- (void)dealloc;
- (void)vacuumDatabase;

@end
