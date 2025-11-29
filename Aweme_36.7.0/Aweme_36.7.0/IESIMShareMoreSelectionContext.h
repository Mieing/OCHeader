@class AWEIMFetchShareListResponseModel, NSString, NSDictionary, NSArray, AWEShareContext;
@protocol AWEIMShareAndForwardToChatProtocol;

@interface IESIMShareMoreSelectionContext : NSObject

@property (copy, nonatomic) NSDictionary *paramsDict;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) NSString *groupID;
@property (nonatomic) BOOL isForwardIMMessage;
@property (nonatomic) long long forwardMessageType;
@property (nonatomic) BOOL shouldHideGroupSharing;
@property (nonatomic) BOOL isSharingGroupCommand;
@property (nonatomic) BOOL isGameIncentive;
@property (nonatomic) BOOL isExchange;
@property (nonatomic) BOOL triggerShareBlock;
@property (nonatomic) BOOL filterFriensAndNormalGroup;
@property (nonatomic) BOOL shouldFilterFansGroup;
@property (nonatomic) BOOL filterNotFriendUser;
@property (nonatomic) BOOL filterPublicGroup;
@property (nonatomic) BOOL filterBAccountUser;
@property (nonatomic) BOOL filterContactExceptSelfOwnedNormalGroup;
@property (retain, nonatomic) NSArray *filterGroupTypes;
@property (nonatomic) BOOL filterNotFollowStatusFriends;
@property (retain, nonatomic) NSString *excludeGroupType;
@property (nonatomic) BOOL fromOpenPlatform;
@property (nonatomic) BOOL enableMessageTabSort;
@property (copy, nonatomic) NSDictionary *extInfo;
@property (copy, nonatomic) NSString *routerEnterMethod;
@property (nonatomic) BOOL needInsertFeatureChannels;
@property (retain, nonatomic) NSArray *exclusionItems;
@property (nonatomic) BOOL isJustSelecting;
@property (nonatomic) BOOL hasLoadAllMessageTabData;
@property (nonatomic) BOOL hasShownCreateGroupEntrance;
@property (retain, nonatomic) id<AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (nonatomic) BOOL shouldHideGroupSharingItem;
@property (nonatomic) BOOL didTapShareBtn;
@property (nonatomic) BOOL isFullScreenSharePanel;
@property (retain, nonatomic) AWEIMFetchShareListResponseModel *horizontalResponseModel;
@property (nonatomic) BOOL isCreateGroupEntranceShowAsCell;

- (id)initWithParamsDict:(id)a0;
- (void)setShareContext:(id)a0 enterMethod:(id)a1;
- (BOOL)enableGameSharePanel;
- (BOOL)shouldFilterSelf;
- (void)parseParamsDict;
- (void).cxx_destruct;

@end
