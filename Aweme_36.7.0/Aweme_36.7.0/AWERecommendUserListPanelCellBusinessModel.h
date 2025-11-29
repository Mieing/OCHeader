@class NSString, AWEAwemeModel, AWEUserModel, AFDFriendsLikeListDataController;
@protocol AWEIMCustomQuickReplyControllerHandlerPortocol;

@interface AWERecommendUserListPanelCellBusinessModel : NSObject <AWEUserListGeneralCellBusinessModelProtocol>

@property (retain, nonatomic) id<AWEIMCustomQuickReplyControllerHandlerPortocol> imCustomQuickReplyHandler;
@property (nonatomic) BOOL isFriendPost;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AFDFriendsLikeListDataController *dataController;

- (id)enterFrom;
- (id)enterMethod;
- (BOOL)isFriends;
- (id)subTitleAttributedString;
- (long long)subtitleNumberOfLines;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })subtitleHitTestInsets;
- (BOOL)shouldShowRelationTag;
- (BOOL)relationButtonIncludesDefaultLightInteractionState;
- (BOOL)relationButtonIncludesDefaultSendMessageState;
- (BOOL)relationButtonIncludesDefaultFollowUnfollowStates;
- (id)extraRelationButtonStates;
- (id)extraRelationButtonTransitions;
- (BOOL)shouldShowMoreActionButton;
- (id)lightInteractionExtraParams;
- (id)lightActionSource;
- (id)transitionToSendMsg;
- (void)trackRecommendVideoUserCellEvent;
- (void).cxx_destruct;

@end
