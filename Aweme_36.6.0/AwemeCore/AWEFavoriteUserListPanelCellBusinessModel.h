@class AWEFavoriteListDataController, NSString, AWEAwemeModel, AWEUserModel;

@interface AWEFavoriteUserListPanelCellBusinessModel : NSObject <AWEUserListGeneralCellBusinessModelProtocol>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *accountType;
@property (retain, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEFavoriteListDataController *dataController;
@property (nonatomic) BOOL isFamiliarItemAwemeModel;
@property (nonatomic) long long currentAwemeItemUserFollowStatus;

- (id)enterFrom;
- (long long)prePageType;
- (long long)fromPageType;
- (BOOL)isFriends;
- (BOOL)shouldShowRelationTag;
- (BOOL)shouldMonitorActiveStatus;
- (BOOL)shouldShowRelationButton;
- (BOOL)relationButtonIncludesDefaultLightInteractionState;
- (BOOL)relationButtonIncludesDefaultSendMessageState;
- (BOOL)relationButtonIncludesDefaultFollowUnfollowStates;
- (BOOL)shouldShowMoreActionButton;
- (id)moreActionButtonSupportedFunctions;
- (BOOL)shouldShowDisclosureIndicator;
- (double)disclosureIndicatorIconSize;
- (void).cxx_destruct;
- (long long)channelID;
- (id)initWithUserModel:(id)a0;

@end
