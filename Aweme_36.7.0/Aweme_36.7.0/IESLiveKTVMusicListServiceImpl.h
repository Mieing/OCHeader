@class IESLiveKTVMusicManager, NSString;

@interface IESLiveKTVMusicListServiceImpl : NSObject <IESLiveKTVMusicListService>

@property (weak, nonatomic) IESLiveKTVMusicManager *musicManagerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentMusicModel;
- (id)orderList;
- (id)imOrderList;
- (id)getSongFromImOrderList:(id)a0;
- (void).cxx_destruct;

@end
