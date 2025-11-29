@class NSMutableDictionary, AWEVideoPublishViewModel;

@interface ACCGenericTemplateMusicBeatsTaskManager : NSObject <NPDynamicTemplateDelegate_OC>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSMutableDictionary *resultCallBackDic;

- (id)initWithPublishModel:(id)a0;
- (id)beatsWithMusic:(id)a0;
- (void)requestMusicBeatsInfo:(id)a0 templateID:(id)a1 requestCallback:(id)a2;
- (void)requestTransitionInfo:(id)a0 templateID:(id)a1 requestCallback:(id)a2;
- (long long)validDurationForMusicDuration:(long long)a0;
- (void)downloadBeatsWithMusic:(id)a0 completion:(id /* block */)a1;
- (void)downloadBeatsWithMusicId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
