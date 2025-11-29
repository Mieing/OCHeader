@class NSString, FinderLiveFanClubContacts, MMFinderLiveTask, WCFinderContact;

@interface MMFinderLiveFansGroupInfo : NSObject <WCFinderContactExt, IContactMgrExt>

@property (nonatomic) BOOL fansGroupCreated;
@property (nonatomic) BOOL enableFansGroup;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSString *anchorUsrName;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) BOOL isSelfAnchor;
@property (nonatomic) BOOL localJoined;
@property (nonatomic) BOOL isSelfJoined;
@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (nonatomic) BOOL hasRegisterExtension;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (nonatomic) unsigned long long currentFollowState;
@property (nonatomic) BOOL enableFansGroupNotice;
@property (nonatomic) BOOL selfFansGroupSuperfanEnabled;
@property (nonatomic) BOOL isSuperfanEnabled;
@property (nonatomic) unsigned int superfanCount;
@property (retain, nonatomic) NSString *superfanUpgradePageUrl;
@property (nonatomic) BOOL selfFansGroupAnchorCardShown;
@property (nonatomic) unsigned int selfFansGroupAnchorCardVisibility;
@property (nonatomic) BOOL selfJoinedSuperfan;
@property (retain, nonatomic) NSString *fansGroupName;
@property (retain, nonatomic) NSString *fansGroupDetailUrl;
@property (nonatomic) unsigned int defaultIntimacy;
@property (retain, nonatomic) NSString *fansGroupNotice;
@property (retain, nonatomic) NSString *fansGroupNoticeImageUrl;
@property (nonatomic) unsigned int fansGroupNoticeMinLevel;
@property (nonatomic) unsigned int fansGroupNoticeVibility;
@property (retain, nonatomic) FinderLiveFanClubContacts *anchorCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createFansGroupInfoFromFansClubInfo:(id)a0 isAnchor:(BOOL)a1 anchorUsrName:(id)a2 selfJoined:(BOOL)a3;
+ (id)createFansGroupInfoByAnchorWithName:(id)a0 anchorUsrName:(id)a1;

- (void)createFansGroupWithName:(id)a0;
- (id)init;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)localEnableSelfCreatedSuperfan;
- (BOOL)checkNewSelfJoinedValid:(BOOL)a0;
- (BOOL)isBizFollowed;
- (void)updateSelfJoined:(BOOL)a0;
- (void)updateCurrentFansGroupStateForJoinGroup;
- (void)updateCurrentFansGroupStateForFollowStateChanged;
- (void)updateCurrentFansGroupState;
- (void)updateFromFansClubInfo:(id)a0;
- (void)updateForFinderDataItemChanged;
- (void)onFinderContactUpdate:(id)a0;
- (void)onFinderContactFollowStatusUpdate:(id)a0;
- (void)onModifyContact:(id)a0;
- (void).cxx_destruct;

@end
