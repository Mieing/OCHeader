@class NSString, NSNumber, IESLiveCombineSubject;

@interface IESLivePrivilegeEntranceProfileViewModel : IESLiveCubeViewModel <IESLiveFansGroupActions>

@property (nonatomic) BOOL expiredShouldGuide;
@property (retain, nonatomic) NSString *clubIconState;
@property (retain, nonatomic) NSNumber *showFansclubGuide;
@property (retain, nonatomic) NSNumber *fansclubLevel;
@property (retain, nonatomic) NSNumber *enableShowAnimation;
@property (retain, nonatomic) NSNumber *roomFansclubDataReady;
@property (nonatomic) BOOL showingFansClubUrgeAnimation;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) IESLiveCombineSubject *showParticipateUrgeSubject;
@property (nonatomic) long long fansClubType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didReceiveHTSLiveFansclubMessage:(id)a0;
- (void)didReceiveHTSLiveEcomFansclubMessage:(id)a0;
- (void)didEcomFansGroupEntryInfoRequestFinish:(BOOL)a0 fansGroupEntryInfo:(id)a1;
- (void)didFansGroupEntryInfoRequestFinish:(BOOL)a0 fansGroupEntryInfo:(id)a1;
- (void)bindService;
- (id)fansClubTrackParams;
- (id)initWithAnchorTag:(BOOL)a0 fansClubType:(long long)a1;
- (void)onParticipateUrgeStart;
- (void)onParticipateUrgeEnd;
- (void)handleFollowEvent;
- (void)showFansGuideIfNeededWithModel:(id)a0;
- (void)startJoinFansClubGuideIfNeededWithModel:(id)a0;
- (void)handleFansclubMessage:(id)a0;
- (void)handleEcomFansclubMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
