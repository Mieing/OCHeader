@class NSString, RACSubject, RACSignal, ACCGroupedPredicate;

@interface ACCRecordSelectPropViewModel : ACCRecorderViewModel <ACCRecordSelectPropService, FPDependentInitable>

@property (nonatomic) BOOL hasTrackedIconShow;
@property (retain, nonatomic) RACSubject *clickSelectPropBtnSubject;
@property (retain, nonatomic) RACSubject *selectPropTitleDisplaySubject;
@property (retain, nonatomic) NSString *stickerSwitchText;
@property (nonatomic) double firstFrameStartTime;
@property (nonatomic) unsigned long long selectPropDisplayType;
@property (readonly, nonatomic) ACCGroupedPredicate *canDisplayPropBtn;
@property (readonly, nonatomic) ACCGroupedPredicate *canDisplayPropBtnTitle;
@property (readonly, nonatomic) ACCGroupedPredicate *canShowStickerPanelAtLaunch;
@property (readonly, nonatomic) RACSignal *clickSelectPropBtnSignal;
@property (readonly, nonatomic) RACSignal *selectPropTitleDisplaySignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendSignalAfterClickSelectPropBtn;
- (void)sendSignalChangeTitleDisplayState;
- (void)trackPropEntranceIconFirstShowTimeIfNeed;
- (void)configStickerBtnWithURLArray:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
- (void)p_configStickerBtnWithURL:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;

@end
