@class NSString, ACCRecordSelectMusicServiceImpl, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface AWERecordSelectMusicBindServiceImpl : NSObject <ACCRecordSelectMusicBindService>

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCRecordSelectMusicServiceImpl *selectMusicViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRepository:(id)a0 serviceProvider:(id)a1;
- (void)bindResourceLoadedService;
- (void)bindPropService;
- (void)bindMVSelectService;
- (void)addMusicShootSameMusicResourceApplyTrackNode;
- (void)trackMusicShootSameMusicDidApplyIfNeed;
- (void)bindSelectMusicViewModel:(id)a0;
- (void)bindAllService;
- (void).cxx_destruct;

@end
