@class IESLiveRoomThemeApi;
@protocol IESLiveRoomThemeActions;

@interface IESLiveRoomThemeManager : NSObject

@property (retain, nonatomic) IESLiveRoomThemeApi *api;
@property (nonatomic) long long maxTimes;
@property (retain, nonatomic) id<IESLiveRoomThemeActions> themeDispatcher;

+ (id)sharedManager;

- (void)fetchThemeDataWithRoom:(id)a0 fetchMomentType:(long long)a1;
- (void)prefetchThemeData:(id)a0;
- (void)fetchLocalThemeDataWithRoom:(id)a0 tintTags:(id)a1;
- (id)imageWithType:(int)a0 skinInfo:(id)a1 isVertical:(BOOL)a2;
- (void)prefetchImageDataIfNeedWithOriginData:(id)a0;
- (void)downloadImageDataWithType:(int)a0 liveImage:(id)a1;
- (void)prefetchThemeDataWithEnterRoom:(id)a0;
- (BOOL)checkLocalDataExistStatusWithRoom:(id)a0;
- (void)refreshViewTheme;
- (void)cacheDataWhenRoomEnterWithRoom:(id)a0 complete:(id /* block */)a1;
- (void)loadImageWithType:(int)a0 image:(id)a1 inRoom:(id)a2 completion:(id /* block */)a3;
- (id)imageWithType:(int)a0 isVertical:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
