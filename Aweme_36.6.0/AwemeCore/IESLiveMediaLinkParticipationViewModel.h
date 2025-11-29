@class IESLiveCombineSubject, NSString, NSAttributedString, NSSet, NSMutableDictionary, NSMutableArray, HTSLiveUser, HTSLiveInteractiveAPIV2, NSNumber;
@protocol IESLiveMediaMultiLinkerProvider, IESLiveMultiLinkerMediaBuilder;

@interface IESLiveMediaLinkParticipationViewModel : NSObject <IESLiveLinkmicLinkerAnchorDelegate, IESLiveMediaLinkParticipationInfo>

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *api;
@property (retain, nonatomic) NSMutableArray *sectionList;
@property (retain, nonatomic) NSMutableDictionary *rivalExtraInfoMap;
@property (retain, nonatomic) NSMutableDictionary *participationItemMap;
@property (nonatomic) double requestTimeStamp;
@property (retain, nonatomic) IESLiveCombineSubject *reloadSubject;
@property (retain, nonatomic) id<IESLiveMultiLinkerMediaBuilder> mediaLinkBuilder;
@property (nonatomic) BOOL isParticipationListFetching;
@property (retain, nonatomic) NSMutableDictionary *invitedUserMapByMyself;
@property (retain, nonatomic) NSMutableDictionary *invitedItemMapByMyself;
@property (retain, nonatomic) HTSLiveUser *userApplyingTo;
@property (retain, nonatomic) NSSet *lastActiveUserIDSet;
@property (copy, nonatomic) NSString *sourceOfUserApplyingTo;
@property (nonatomic) BOOL isInviting;
@property (weak, nonatomic) id<IESLiveMediaMultiLinkerProvider> mLinkerProvider;
@property (nonatomic, getter=isListShowing) BOOL listShowing;
@property (weak, nonatomic) id curAlert;
@property (nonatomic) unsigned long long inviteButtonStatus;
@property (copy, nonatomic) NSAttributedString *titleStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateInviteButtonStatus;
- (void)p_initializeInvitationAndApplicationByMyself;
- (void)buildTitleStr;
- (void)fetchParticipationList:(BOOL)a0;
- (void)p_emptyAuxiliaryData;
- (void)p_resolveRivalExtraInfo:(id)a0;
- (id)p_buildList:(id)a0 requestID:(id)a1 listType:(unsigned long long)a2;
- (id)p_buildFollowListWithValidRooms:(id)a0 invalidRooms:(id)a1 requestID:(id)a2;
- (void)p_checkAndProcessInvitationWithItem:(id)a0 action:(id /* block */)a1;
- (void)p_filterLinkedUsersInRivalExtraInfo:(id)a0 aviodSelf:(id)a1;
- (void)p_setupItem:(id)a0 forAnchorID:(id)a1 inContainer:(id)a2;
- (void)p_setupItemState:(long long)a0 forAnchorID:(id)a1 inContainer:(id)a2;
- (id)p_makeNormalCellItemWithRoomModel:(id)a0 listType:(unsigned long long)a1 requestID:(id)a2;
- (id)p_makeBarCellItemWithTitle:(id)a0 active:(BOOL)a1 count:(long long)a2 requestID:(id)a3;
- (void)p_bindLinkBehaviorToItem:(id)a0;
- (void)cancelInviteUser:(id)a0;
- (void)startInviteUser:(id)a0 userID:(id)a1;
- (void)successInviteUser:(id)a0;
- (void)clearParticipationList;
- (void)cancelApplicationWithSource:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)cancelInvitation:(id)a0 source:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)exitMultiLinkWithSource:(unsigned long long)a0 completion:(id /* block */)a1;
- (unsigned long long)itemCountForSection:(unsigned long long)a0;
- (id)itemSectionForType:(int)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
