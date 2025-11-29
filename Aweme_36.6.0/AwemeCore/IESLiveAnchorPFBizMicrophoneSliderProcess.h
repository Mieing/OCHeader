@class IESLiveAnchorPFListItem, NSString, IESLiveAnchorPFMicrophoneSliderModel, IESLiveAnchorPFMicrophoneSlider;

@interface IESLiveAnchorPFBizMicrophoneSliderProcess : IESLiveAnchorPFBaseProcess <IESLiveAnchorPFStateObserver, IESLiveAnchorPFListObserver>

@property (retain, nonatomic) IESLiveAnchorPFMicrophoneSlider *microphoneSlider;
@property (retain, nonatomic) IESLiveAnchorPFMicrophoneSliderModel *microphoneSliderModel;
@property (retain, nonatomic) IESLiveAnchorPFListItem *microphoneSliderItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startProcess;
- (void)bindAction;
- (void)pfListViewWillAppear;
- (void)pfListViewDidDisAppear;
- (id)pfService;
- (id)pfListService;
- (void)microphoneStateDidChange:(long long)a0;
- (void)setupMicrophoneSliderModel;
- (void)setupMicrophoneSliderItem;
- (void)addOrRemoveMicrophoneSliderItemWithState:(long long)a0;
- (void)updateMicrophoneSliderModel;
- (void)updateMicrophoneSliderIfNeeded;
- (void)cleanMicrophoneSlider;
- (void)setupMicrophoneSlider;
- (void)updateMicrophoneSlider;
- (void)trackMicrophoneVolumeChange:(double)a0;
- (void).cxx_destruct;

@end
