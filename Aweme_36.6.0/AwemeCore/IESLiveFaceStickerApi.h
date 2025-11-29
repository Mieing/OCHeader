@protocol IESLiveRoomService;

@interface IESLiveFaceStickerApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)initWithRoomModel:(id)a0;
- (void)notifyFansGroupGuide:(id)a0 completion:(id /* block */)a1;
- (void)fetchAigcBackgroundHistoryData:(id /* block */)a0;
- (void)generateEffectAigcBackground:(id)a0 keyWord:(id)a1 generateKeyWord:(id)a2 aigcModelKey:(id)a3 completion:(id /* block */)a4;
- (void)checkAigcBackgroundTaskStatus:(id)a0 completion:(id /* block */)a1;
- (void)uploadEffectInterationInfo:(id)a0 effectId:(id)a1 roomId:(id)a2 anchorId:(id)a3 completion:(id /* block */)a4;
- (void)fetchEffectInteractionResult:(id)a0 effectId:(id)a1 roomId:(id)a2 anchorId:(id)a3 completion:(id /* block */)a4;
- (void)uploadAnchorEffectInfo:(id)a0 stickersJsonInfo:(id)a1 type:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
