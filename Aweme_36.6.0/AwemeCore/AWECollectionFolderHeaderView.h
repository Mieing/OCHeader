@class NSDictionary, NSString, UIImageView, DUXPopover, UILabel, AWEFavoriteFolderBaseInfoModel, UIButton;

@interface AWECollectionFolderHeaderView : UIView <DUXPopoverDelegate>

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *authorImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (copy, nonatomic) NSString *authorID;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) UIButton *watchLaterInfoButton;
@property (retain, nonatomic) AWEFavoriteFolderBaseInfoModel *collectionModel;
@property (retain, nonatomic) UILabel *createTextLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) DUXPopover *followSuccessPopover;
@property (retain, nonatomic) UIImageView *privacyLockView;
@property (nonatomic) BOOL isFollowRequestOnAir;
@property (copy, nonatomic) NSDictionary *trackParam;
@property (nonatomic) BOOL isSecretFollowedFolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverDidDisappear:(id)a0;
- (void)updateContentWithModel:(id)a0;
- (void)p_handleFollowStatusChangeNotification:(id)a0;
- (void)p_hideAllElement;
- (void)p_updateFollowButtonWithModel:(id)a0;
- (id)p_getEnterFromString:(id)a0;
- (void)handleTitleTapped;
- (void)transferToProfilePage;
- (void)p_followFavoriteFolder;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupUI;
- (void)infoButtonTapped;

@end
