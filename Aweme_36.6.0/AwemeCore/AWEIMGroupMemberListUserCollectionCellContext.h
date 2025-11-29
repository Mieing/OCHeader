@class AWEIMMessageConversation, NSString, NSUUID, IESIMContactPickerRelationTagViewModel;
@protocol IESIMGroupParticipantTagContainerModelProtocol;

@interface AWEIMGroupMemberListUserCollectionCellContext : NSObject

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSString *groupAlias;
@property (nonatomic) BOOL active;
@property (nonatomic) long long tagCountLimit;
@property (nonatomic) BOOL messageActive;
@property (nonatomic) BOOL showMemberRelationLabel;
@property (nonatomic) BOOL hideRoleTag;
@property (nonatomic) BOOL shouldUseColorfulRoleTag;
@property (nonatomic) BOOL shouldShowLiveFansSubscriptionDate;
@property (retain, nonatomic) NSUUID *pageId;
@property (nonatomic) BOOL shouldShowFansTags;
@property (nonatomic) BOOL shouldShowRightView;
@property (nonatomic) BOOL isUseNewTag;
@property (retain, nonatomic) IESIMContactPickerRelationTagViewModel *relationModel;
@property (retain, nonatomic) id<IESIMGroupParticipantTagContainerModelProtocol> participantTagModel;

- (void).cxx_destruct;

@end
