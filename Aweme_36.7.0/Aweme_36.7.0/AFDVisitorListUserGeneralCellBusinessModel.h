@class NSString, NSAttributedString, AWEUserModel;
@protocol AWEIMActiveUserInfoService, AFDColorRingFacadeProtocol, AWEIMStreakDisplayManagerProtocol;

@interface AFDVisitorListUserGeneralCellBusinessModel : NSObject <AWEUserListGeneralCellBusinessModelProtocol>

@property (retain, nonatomic) NSAttributedString *consecutiveChatAttributedString;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (retain, nonatomic) id<AWEIMActiveUserInfoService> activeInfo;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (retain, nonatomic) id<AFDColorRingFacadeProtocol> colorRingFacade;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) NSString *referString;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;
@property (nonatomic) BOOL isUnread;

- (id)enterFrom;
- (BOOL)trackColorRingShow;
- (id)subTitleTextColor;
- (void)didEndDisplayingCell;
- (id)lightInteractionContext;
- (void)onDidBindToCellWithRefreshBlock:(id /* block */)a0;
- (void)didBindToColorRingView:(id)a0;
- (void)onUserStatusChanged;
- (void)onActiveInfoDidUpdated:(id)a0;
- (BOOL)shouldShowRelationTag;
- (id)relationTagAttributedString;
- (BOOL)hitStreakUpdateExp;
- (id)relationTagBackgroundColor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })relationTagEdgeInsets;
- (BOOL)shouldShowRelationButton;
- (BOOL)relationButtonIncludesDefaultFollowUnfollowStates;
- (BOOL)shouldShowMoreActionButton;
- (BOOL)shouldShowUnreadView;
- (BOOL)shouldShowDisclosureIndicator;
- (id /* block */)bigFontAutoLengthBlock;
- (id /* block */)bigFontAutoFontSizeBlock;
- (id)lightActionSource;
- (void)markHasRead;
- (void)fetchConsecutiveChatStatusIfNeeded;
- (void).cxx_destruct;
- (id)subTitle;
- (id)cellBackgroundColor;

@end
