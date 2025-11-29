@class AWECodeGenV1CombineMixListResponse, NSArray, NSString;
@protocol AWECloudAlbumPrivatePostViewModel, AWEInTodayPrivatePostViewModelProtocol;

@interface AWEPrivateMixEntranceManager : NSObject <AWEAppAwemeSettingMessage, AWEUserMessage, AWECloudAlbumChangeProtocol>

@property (retain, nonatomic) AWECodeGenV1CombineMixListResponse *privateModel;
@property (retain, nonatomic) NSArray *cacheCoverListModelArray;
@property (nonatomic) BOOL canCacheCover;
@property (nonatomic) BOOL isPrivateRequesting;
@property (nonatomic) BOOL isBlockPrivateRequest;
@property (nonatomic) BOOL isAlbumRequesting;
@property (retain, nonatomic) id<AWECloudAlbumPrivatePostViewModel> cloudAlbumDataController;
@property (retain, nonatomic) id<AWEInTodayPrivatePostViewModelProtocol> memoriesDataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPrivatePostEntrance:(id)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (void)awemeSettingDidChange;
- (void)cloudAlbumUpdate;
- (void)requestPrivateModelIfNeedWithUser:(id)a0 source:(unsigned long long)a1 refresh:(BOOL)a2 completion:(id /* block */)a3;
- (void)storeCachePrivateModel:(id)a0;
- (id)cachePrivateModelWithUser:(id)a0;
- (BOOL)canShowPrivateEntrance:(id)a0;
- (void)resetPrivateModel;
- (void)requestPrivateModelIfNeedWithUser:(id)a0 source:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)isMemoriesSettingsOn;
- (void)cacheCoverListModelArrayIfNeed:(id)a0;
- (void)addLocalMemoriesIfNeed:(id /* block */)a0;
- (id)cachePrivateModelKey;
- (void)requestCloudAlbumIfNeed;
- (void)blockPrivateRequest;
- (BOOL)enablePrivateAwemeCount:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
