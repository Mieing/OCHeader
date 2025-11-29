@class AWEIMGroupMessageActiveModel, NSString, AWEIMGroupLiveFansSubscriptionDateModel, AWEIMGroupFansClubModel, AWEIMFansTagsModel, NSUUID, NSMutableSet;
@protocol AWEIMGMPeerViewModelConfigSource;

@interface AWEIMGroupParticipantBizInfoPeerViewModel : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fansTagsModelLock;
}

@property (copy) NSString *activeTag;
@property (nonatomic) long long activeTagLevel;
@property (copy) NSString *fansClubIconUrl;
@property (copy) NSString *displayingLiveFansSubscriptionDateTagForMessage;
@property (weak) id<AWEIMGMPeerViewModelConfigSource> configSource;
@property (retain, nonatomic) AWEIMGroupMessageActiveModel *messageActiveModel;
@property (retain, nonatomic) AWEIMGroupFansClubModel *fansClubModel;
@property (retain, nonatomic) AWEIMGroupLiveFansSubscriptionDateModel *liveFansSubscriptionDateModel;
@property (retain, nonatomic) AWEIMFansTagsModel *fansTagsModel;
@property (nonatomic) BOOL hasShowedOnMessageListPage;
@property (weak, nonatomic) NSUUID *pageIdHasShowedLiveFansSubscriptionDateTagOnGroupMemberList;
@property (retain, nonatomic) NSMutableSet *messageListTrackingSet;
@property (nonatomic) BOOL hitActiveTagV2;

+ (BOOL)couldShowFansTagsWithConversation:(id)a0;
+ (BOOL)couldShowFansTagsWithCon:(id)a0;

- (id)appendFansTagsParamToEventParams:(id)a0;
- (void)didShowLiveFansSubscriptionDateTagOnGroupMemberListWithPageId:(id)a0 extraParams:(id)a1;
- (void)__updateTag;
- (void)__updateFansClubIcon;
- (void)__updateLiveFansSubscriptionDateTag;
- (void)p_fansTagLock;
- (void)p_fansTagUnLock;
- (id)eventParamForFansTags;
- (void).cxx_destruct;
- (id)init;

@end
