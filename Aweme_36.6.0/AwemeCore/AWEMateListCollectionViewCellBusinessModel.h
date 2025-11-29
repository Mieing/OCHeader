@class NSString, AWEUserModel, AFDCustomMorePopoverSheetController;
@protocol AWEIMActiveUserInfoService;

@interface AWEMateListCollectionViewCellBusinessModel : NSObject <AFDFriendsListMoreSettingsDelegate, AWEUserListGeneralCellBusinessModelProtocol>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSString *activeStatusIdentifier;
@property (retain, nonatomic) id<AWEIMActiveUserInfoService> activeInfo;
@property (retain, nonatomic) AFDCustomMorePopoverSheetController *popController;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showSendMsgAndMoreBtns;
+ (double)suggestedHeight;

- (id)referString;
- (id)enterFrom;
- (id)enterMethod;
- (id)subTitleTextColor;
- (BOOL)isFriends;
- (unsigned long long)activeUserSourceType;
- (void)onDidBindToCellWithRefreshBlock:(id /* block */)a0;
- (void)onActiveInfoDidUpdated:(id)a0;
- (BOOL)shouldShowVerifiedIcon;
- (BOOL)shouldMonitorActiveStatus;
- (BOOL)shouldShowRelationButton;
- (BOOL)shouldShowMoreActionButton;
- (id /* block */)moreButtonTappedBlock;
- (id /* block */)bigFontAutoFontSizeBlock;
- (id)lightInteractionExtraParams;
- (id)lightActionSource;
- (void)modifyAliasOnPopoverSheet;
- (void)trackEventWithEventName:(id)a0 extraParams:(id)a1;
- (id)initWithUserModel:(id)a0 activeStatusIdentifier:(id)a1;
- (void)showPopoverSheet:(id)a0;
- (void)dismissPopViewsIfNeeded;
- (void).cxx_destruct;
- (id)subTitle;
- (id)accountType;
- (id)title;
- (double)avatarSize;
- (id)pageIdentifier;

@end
