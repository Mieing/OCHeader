@class NSString;

@interface AWERepoModelFactoryImpl : HTSService <AWERepoModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createRepoContextModel;
+ (id)createRepoCanvasModel;
+ (id)createRepoCutSameModel;
+ (id)createRepoMVModel;
+ (id)createRepoMusicModel;
+ (id)createRepoRedPacketModel;
+ (id)createRepoImageAlbumInfoModel;
+ (id)createRepoTrackModel;
+ (id)createRepoShareModel;
+ (id)createRepoAuthorityModel;
+ (id)createRepoPrepareTrackModel;


@end
