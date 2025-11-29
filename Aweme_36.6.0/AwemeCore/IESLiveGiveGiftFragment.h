@class NSString, IESLiveGiveGiftStore;

@interface IESLiveGiveGiftFragment : IESLiveRoomComponent <IESLiveGiveGiftRouter>

@property (retain, nonatomic) IESLiveGiveGiftStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)sendGift:(id)a0;
- (void)sendGift:(id)a0 count:(unsigned long long)a1 params:(id)a2 extraTrack:(id)a3 successCallback:(id /* block */)a4 errorCallback:(id /* block */)a5;
- (void)sendGift:(id)a0 count:(unsigned long long)a1 extraTrack:(id)a2;
- (id)createTransactionWithConfig:(id)a0;
- (void)sendGift:(id)a0 count:(unsigned long long)a1;
- (void)sendGift:(id)a0 count:(unsigned long long)a1 toUser:(id)a2 extraTrack:(id)a3;
- (void)sendGift:(id)a0 count:(unsigned long long)a1 toUser:(id)a2 params:(id)a3 extraTrack:(id)a4 successCallback:(id /* block */)a5 errorCallback:(id /* block */)a6;
- (void)sendAsset:(id)a0 count:(unsigned long long)a1;
- (void)sendAsset:(id)a0 count:(unsigned long long)a1 extraTrack:(id)a2 successCallback:(id /* block */)a3 errorCallback:(id /* block */)a4;
- (unsigned long long)sendPropSceneWithToUser:(id)a0;
- (void).cxx_destruct;
- (id)statistics;

@end
