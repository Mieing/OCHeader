@protocol IESLiveUserService, IESLiveRoomService, HTSLiveTemplateProviderAdapter, IESLiveDanmakuNodeFactoryDelegate;

@interface IESLiveDanmakuNodeFactory : NSObject

@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (retain, nonatomic) id<HTSLiveTemplateProviderAdapter> templateProvider;
@property (weak, nonatomic) id<IESLiveDanmakuNodeFactoryDelegate> delegate;
@property (retain, nonatomic) id<IESLiveRoomService> room;

- (id)carnivalDanmakuNodeFromMessage:(id)a0 settings:(id)a1 emoticonParser:(id)a2;
- (void)carnivalDanmakuNodeFromMessage:(id)a0 settings:(id)a1 emoticonParser:(id)a2 completion:(id /* block */)a3;
- (void)resetCarnivalDanmakuNodes:(id)a0 settings:(id)a1 emoticonParser:(id)a2;
- (void)buildDataFromMessage:(id)a0 danmakuSettings:(id)a1 emoticonParser:(id)a2 preferredStrategyClass:(id)a3;
- (id)selectOneTemplateWithSetting:(id)a0 forMessage:(id)a1;
- (void)p_loadImageForText:(id)a0 completion:(id /* block */)a1;
- (void)p_loadImageForCombineText:(id)a0 completion:(id /* block */)a1;
- (id)selectOneInTemplates:(id)a0;
- (void)p_loadImageForURLListArray:(id)a0 completion:(id /* block */)a1;
- (void)setupStatisticsForData:(id)a0 withMessage:(id)a1;
- (void).cxx_destruct;

@end
