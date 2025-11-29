@class NSString, RACSignal, RACSubject, IESEffectModel;

@interface ACCResourceLoadedViewModel : NSObject <ACCResourceLoadedService>

@property (retain, nonatomic) RACSubject *handleRearApplyMusicSubject;
@property (retain, nonatomic) RACSubject *assembleRearApplyMusicSubject;
@property (retain, nonatomic) RACSubject *assembleRearAndAutoApplyMusicSubject;
@property (retain, nonatomic) RACSubject *beginResourceLoadSubject;
@property (retain, nonatomic) RACSubject *finishResourceLoadedSubject;
@property (retain, nonatomic) RACSubject *needFetchRecommendMusicSubject;
@property (retain, nonatomic) RACSubject *loadPropStageSubject;
@property (retain, nonatomic) IESEffectModel *rearEffectModel;
@property (readonly, nonatomic) RACSignal *handleRearApplyMusicSignal;
@property (readonly, nonatomic) RACSignal *assembleRearApplyMusicSignal;
@property (readonly, nonatomic) RACSignal *assembleRearAndAutoApplyMusicSignal;
@property (readonly, nonatomic) RACSignal *needFetchRecommendMusicSignal;
@property (readonly, nonatomic) RACSignal *beginResourceLoadSignal;
@property (readonly, nonatomic) RACSignal *finishResourloadedSignal;
@property (readonly, nonatomic) RACSignal *loadPropStageSignal;
@property (retain, nonatomic) IESEffectModel *aigcEffectModel;
@property (retain, nonatomic) IESEffectModel *picTemplateEffectModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)send_changeLoadPropStageSignalWithStage:(unsigned long long)a0 propModel:(id)a1;
- (void)send_assembleRearApplyMusicSignal:(id)a0;
- (void)send_handleRearApplyMusicSignal:(id)a0;
- (void)send_assembleRearAndAutoApplyMusicSignal:(id)a0;
- (void)send_beginResourceLoadSignal;
- (void)send_finishResourceLoadedSignalWithPropModel:(id)a0;
- (void)send_needFetchRecommendMusicSignalWithPropModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
