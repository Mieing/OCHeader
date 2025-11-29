@class NSArray, NSDictionary, IESLiveUnionLiveInfoModel, HTSEventContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveUnionLiveInfoStore : NSObject <IESLiveUnionRoomService>

@property (nonatomic) BOOL hasAnchorAccess;
@property (nonatomic) BOOL authorized;
@property (copy, nonatomic) NSDictionary *schemaMap;
@property (retain, nonatomic) NSArray *guestInvitedArray;
@property (retain, nonatomic) NSArray *guestAnchorArray;
@property (retain, nonatomic) NSArray *guestArray;
@property (retain, nonatomic) IESLiveUnionLiveInfoModel *model;
@property (nonatomic) unsigned long long pendantViewType;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL hasUnionAnchorPrivilege;
@property (copy, nonatomic) id /* block */ updatePendantView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)memberArray;
- (void)didUpdateRoom:(id)a0;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (id)guestAnchorArrayInUnionRoom;
- (BOOL)isUnionRoom;
- (BOOL)userISGuestAnchor:(id)a0;
- (void)updateUnionAnchorPrivilege:(BOOL)a0;
- (BOOL)hasUnionLiveAnchorAccess;
- (BOOL)hasUnionLiveAudiencePrivilege;
- (BOOL)isTogetherRoom;
- (void)updateUserPrivilegesArray:(id)a0;
- (void)checkEnableShowAnchorUnionLiveEntry:(id /* block */)a0;
- (unsigned long long)unionLiveType;
- (BOOL)isGuestArrayChange:(id)a0;
- (void)didUpdateMessage:(id)a0;
- (BOOL)isTogetherGuestArrayChange:(id)a0;
- (id)userListPanelSchema;
- (void)openUnionLivePanle;
- (void)didUpdateGuestArray:(id)a0;
- (void)updatePentantViewType;
- (id)firstGuestAnchor;
- (void)fetchUnionAnchorAccessCompletion:(id /* block */)a0;
- (id)unionLivePanleSchema;
- (id)secondGuestImageURLs;
- (id)pendantViewTitle;
- (void).cxx_destruct;

@end
