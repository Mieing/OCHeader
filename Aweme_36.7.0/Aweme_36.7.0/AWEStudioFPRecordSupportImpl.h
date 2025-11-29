@class NSString;

@interface AWEStudioFPRecordSupportImpl : HTSService <AWEStudioFPRecordSupport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createDefaultViewContainer;
- (Class)repoRecorderTrackerToolModel;
- (Class)recordAuthComponent;
- (Class)awe_recordAuthServiceImpl;
- (id)awe_recordAuthService;
- (Class)acc_recordAuthServiceImpl;
- (id)acc_recordAuthService;
- (Class)repoMusicModel;
- (Class)repoContextModel;
- (Class)recordCloseComponent;
- (Class)recordCloseLogicServiceImpl;
- (id)recordCloseLogicService;
- (id)recordCloseService;
- (id)layoutActionWithContext:(id)a0 builder:(id)a1;
- (Class)recordPropEntranceComponent;
- (Class)recordPropEntranceServiceImpl;
- (id)recordPropEntranceService;
- (Class)recordSelectPropViewModel;
- (id)recordSelectPropService;
- (Class)recordSelectMusicComponent;
- (Class)recordSelectMusicServiceImpl;
- (id)recordSelectMusicService;
- (Class)videoEditMusicViewModel;
- (id)editMusicServiceProtocol;
- (id)createVideoEditMusicViewModel;

@end
