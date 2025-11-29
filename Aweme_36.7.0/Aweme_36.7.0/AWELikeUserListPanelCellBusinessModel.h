@class AWELikeListDataController, NSString, AWEAwemeModel, AWEUserModel;
@protocol AFDColorRingFacadeProtocol;

@interface AWELikeUserListPanelCellBusinessModel : NSObject <AWEUserListGeneralCellBusinessModelProtocol>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) id<AFDColorRingFacadeProtocol> colorRingFacade;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *accountType;
@property (retain, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWELikeListDataController *dataController;
@property (nonatomic) BOOL isFamiliarItemAwemeModel;
@property (nonatomic) long long currentAwemeItemUserFollowStatus;

- (id)enterFrom;
- (id)enterMethod;
- (BOOL)trackColorRingShow;
- (long long)prePageType;
- (long long)fromPageType;
- (void)didEndDisplayingCell;
- (BOOL)isFriends;
- (BOOL)needMarkFriends;
- (void)onDidBindToCellWithRefreshBlock:(id /* block */)a0;
- (void)didBindToColorRingView:(id)a0;
- (BOOL)shouldShowRelationTag;
- (BOOL)shouldShowRelationButton;
- (BOOL)relationButtonIncludesDefaultLightInteractionState;
- (BOOL)relationButtonIncludesDefaultFollowUnfollowStates;
- (BOOL)shouldShowMoreActionButton;
- (BOOL)shouldShowDisclosureIndicator;
- (double)disclosureIndicatorIconSize;
- (id)lightActionSource;
- (void).cxx_destruct;
- (id)initWithUserModel:(id)a0;

@end
