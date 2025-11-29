@class MemoryMappedKV, NSMutableDictionary, NSString;
@protocol WCLogicMgrDelegate;

@interface WCAdInfoProxyLogic : MMObject <PBMessageObserverDelegate, MMImageLoaderObserver>

@property (retain, nonatomic) NSMutableDictionary *updateTimeDic;
@property (retain, nonatomic) MemoryMappedKV *infoProxyMapKV;
@property (retain, nonatomic) NSMutableDictionary *avatarInfoDict;
@property (retain, nonatomic) NSMutableDictionary *avatarUrlDict;
@property (weak, nonatomic) id<WCLogicMgrDelegate> wcLogicMgrDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendUsername:(id)a0 forUrl:(id)a1;
- (id)fetchAvatarUrlForUsername:(id)a0;
- (id)fetchImageForUsername:(id)a0;
- (id)fetchAvatarInfoFor:(id)a0;
- (void)setAvatarInfo:(id)a0 forUsername:(id)a1;
- (void)updateAvatarInfoWithItem:(id)a0;
- (void)handleAvatarInfoWithResponse:(id)a0 snsId:(id)a1 request:(id)a2;
- (id)fetchImageForAvatarUrl:(id)a0;
- (void)sendImageUpdatedExtensionWith:(id)a0 url:(id)a1;
- (void)handleAdInfoProxyResponse:(id)a0;
- (BOOL)checkUpdateInterval:(id)a0 tid:(id)a1 function:(id)a2;
- (int)getUpdateInterval:(id)a0;
- (long long)getUpdateTime:(id)a0 tid:(id)a1 function:(id)a2;
- (void)setUpdateTime:(id)a0 tid:(id)a1 function:(id)a2 updateTime:(long long)a3;
- (id)genKeyWithTId:(id)a0 username:(id)a1 function:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
