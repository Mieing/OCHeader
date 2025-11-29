@class NSString, NSMutableArray, IESLiveAnchorPFEntryView;

@interface IESLiveAnchorPFEntryProcess : IESLiveAnchorPFBaseProcess <IESLiveAnchorPFStateObserver>

@property (retain, nonatomic) IESLiveAnchorPFEntryView *entryView;
@property (retain, nonatomic) NSMutableArray *entryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startProcess;
- (void)bindAction;
- (id)getEntryView;
- (void)entryViewDidTapped;
- (id)pfService;
- (id)pfListService;
- (void)microphoneStateDidChange:(long long)a0;
- (void)temperatureStateDidChange:(long long)a0;
- (void)setupEntryItems;
- (void)setupEntryView;
- (BOOL)entryViewIsShowing;
- (id)entryItemForType:(unsigned long long)a0;
- (id)getMicrophoneImage:(long long)a0;
- (id)getTemperatureImage:(long long)a0;
- (id)getNetworkImage:(long long)a0;
- (void)entryViewDidAppear;
- (void)entryViewDidDisAppear;
- (void)cleanEntryItems;
- (void)cleanEntryView;
- (id)providedMicrophoneImageForState:(long long)a0;
- (id)getDefaultMicrophoneImage:(long long)a0;
- (BOOL)isInAudioPunish;
- (void).cxx_destruct;
- (void)networkStateDidChange:(long long)a0;

@end
