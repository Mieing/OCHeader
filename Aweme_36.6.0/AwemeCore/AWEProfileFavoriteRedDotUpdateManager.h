@class NSString, NSMutableArray;

@interface AWEProfileFavoriteRedDotUpdateManager : NSObject <AWEUserMessage, AWEProfileRedDotUpdateDataManagerProtocol, AWEProfileLongConnectionHandlerProtocol>

@property (retain, nonatomic) NSMutableArray *storageCollectsIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForBizId:(id)a0;
+ (BOOL)followedFavoritesUseStaticRegister;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)profileLC_didReceiveMessageObject:(id)a0;
- (id)cachedCollectsIds;
- (void)startLongConnection;
- (void)distributeBizMessageWithDataCell:(id)a0;
- (id)transferStringToFavoriteRedDotModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
