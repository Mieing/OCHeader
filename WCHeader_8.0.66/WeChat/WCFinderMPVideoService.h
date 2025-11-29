@class NSString, NSMutableDictionary;

@interface WCFinderMPVideoService : MMUserService <WCFinderDataItemExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *exportIdToTidDict;
@property (retain, nonatomic) NSMutableDictionary *eposeDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playStatusWithPlayerView:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)asyncGetMPVideoMediaWrapWithFinderMPVideoJSON:(id)a0 complectionBlock:(id /* block */)a1;
- (void)showMPVideoDetailWithJSON:(id)a0 playStatus:(id)a1 extInfo:(id)a2 currentNavController:(id)a3 complectionBlock:(id /* block */)a4 progressBlock:(id /* block */)a5 callBackBlock:(id /* block */)a6;
- (void)changeFeedFavStatusWithJSON:(id)a0 isFav:(BOOL)a1;
- (void)changeFeedLikeStatusWithJSON:(id)a0 isLike:(BOOL)a1;
- (void)reportAppearWithJSON:(id)a0;
- (void)reportDisAppearWithJSON:(id)a0;
- (void)reportBePopedWithJSON:(id)a0;
- (void)_updateExtensionWithDataItem:(id)a0;
- (void)onFinderDataItemUpdate:(id)a0;
- (void)onFinderDataItemUpdate:(id)a0 scene:(int)a1 source:(long long)a2;
- (void)onFinderDataItemIsLikedUpdateByKeyExtention:(id)a0;
- (void)onFinderDataItem:(id)a0 updateFavStateByKeyExtention:(BOOL)a1;
- (int)commentScene;
- (void).cxx_destruct;

@end
