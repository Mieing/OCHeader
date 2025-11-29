@class NSString, NSDictionary, IESLiveGCDTimer, IESLivePrivilegeDressPreviewModel, IESLivePrivilegeDressPreviewBaseView;

@interface IESLivePrivilegeDressPreviewFragment : IESLiveRoomComponent <IESLivePrivilegeDressPreviewInterface>

@property (retain, nonatomic) IESLivePrivilegeDressPreviewBaseView *currentDressPreview;
@property (copy, nonatomic) NSString *currentUserId;
@property (retain, nonatomic) IESLivePrivilegeDressPreviewModel *currentDressPreviewModel;
@property (retain, nonatomic) NSDictionary *getSameClickTrackParams;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (BOOL)preloadDressPreviewWithUserId:(id)a0 dressPreviewModel:(id)a1;
- (id)fetchDressPreviewWithUserId:(id)a0;
- (void)trackPackageCenterGetSameShow;
- (void)trackProfileCardFloatShow;
- (void)trackProfileCardGetSameClick;
- (void)trackEffectShowForCleanStrategy;
- (id)getProfileCardShowSource;
- (id)buildGetSameClickTrackParams;
- (id)buildPackageCenterTrackParams;
- (id)buildCommonTrackerParams;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)dealloc;

@end
