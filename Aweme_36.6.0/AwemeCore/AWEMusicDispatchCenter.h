@class RxMultipleDelegate;
@protocol AWEMusicDispatchLunaV2Protocol, AWEMusicDispatchCollectionProtocol, AWEMusicDispatchPlaylistProtocol;

@interface AWEMusicDispatchCenter : NSObject

@property (retain, nonatomic) RxMultipleDelegate<AWEMusicDispatchCollectionProtocol> *collectionCenter;
@property (retain, nonatomic) RxMultipleDelegate<AWEMusicDispatchPlaylistProtocol> *playlistCenter;
@property (retain, nonatomic) RxMultipleDelegate<AWEMusicDispatchLunaV2Protocol> *lunaV2Center;

+ (void)playlistSongsChangedWithType:(unsigned long long)a0 playlist:(id)a1 changeModels:(id)a2 isMiniLuna:(BOOL)a3 from:(id)a4;
+ (void)playlistModelChangedWithType:(unsigned long long)a0 changeModels:(id)a1 from:(id)a2;
+ (void)addPlaylistObserver:(id)a0;
+ (void)modelCollectionTypeChanged:(id)a0;
+ (void)addCollectionObserver:(id)a0;
+ (id)collectionCenter;
+ (id)playlistCenter;
+ (void)postPlaylistSongsChangedNotificationWithType:(unsigned long long)a0 playlist:(id)a1 changeModels:(id)a2 isMiniLuna:(BOOL)a3;
+ (void)lunaV2Update:(id)a0 isFromCache:(BOOL)a1;
+ (void)removeCollectionObserver:(id)a0;
+ (void)removePlaylistObserver:(id)a0;
+ (void)addLunaV2Observer:(id)a0;
+ (void)removeLunaV2Observer:(id)a0;
+ (id)shared;

- (void).cxx_destruct;

@end
