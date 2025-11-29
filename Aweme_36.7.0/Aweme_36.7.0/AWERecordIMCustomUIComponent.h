@class UILabel, NSString;
@protocol ACCRecorderViewContainer, ACCRecordSelectMusicService;

@interface AWERecordIMCustomUIComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) id<ACCRecordSelectMusicService> musicService;
@property (nonatomic) BOOL hasSelectMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)imModel;
- (id)displayNameString;
- (void).cxx_destruct;

@end
