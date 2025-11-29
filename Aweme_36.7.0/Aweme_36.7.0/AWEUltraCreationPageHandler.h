@class AWEUltraCreationTokenManager, NSArray, AUCDTOInputConfigTrackInfo, NSString, AWEUltraCreationAlbumHelper;

@interface AWEUltraCreationPageHandler : NSObject <ACCCreationToolService>

@property (retain, nonatomic) AWEUltraCreationTokenManager *tokenManager;
@property (copy, nonatomic) id /* block */ finishResultCallback;
@property (retain, nonatomic) AUCDTOInputConfigTrackInfo *trackInfo;
@property (retain, nonatomic) AWEUltraCreationAlbumHelper *albumHelper;
@property (nonatomic) long long currentPage;
@property (copy, nonatomic) NSArray *pages;
@property (copy, nonatomic) NSString *requestId;
@property (readonly, nonatomic) long long curPage;

+ (long long)contextTypeFromPage:(id)a0;

- (void)onCreationFinishWithToken:(id)a0 creationData:(id)a1 UIControlHandler:(id)a2;
- (void)onCustomActionKey:(id)a0 token:(id)a1 creationData:(id)a2 UIControlHandler:(id)a3 serviceProvider:(id)a4;
- (void)onQuitCreationWithToken:(id)a0 UIControlHandler:(id)a1;
- (BOOL)canAssetsGoNext:(id)a0;
- (void)goNextWithAssets:(id)a0 creationData:(id)a1 viewHandler:(id)a2 context:(id)a3;
- (void)goNextWithAssets:(id)a0 creationData:(id)a1 viewHandler:(id)a2 context:(id)a3 directFinish:(BOOL)a4;
- (void)triggerExit:(id)a0;
- (id)initWithConfig:(id)a0 finishResultCallback:(id /* block */)a1;
- (void)configInitialToken:(id)a0;
- (void).cxx_destruct;
- (id)createContext;
- (void)dealloc;

@end
