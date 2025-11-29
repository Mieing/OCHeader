@class UIStackView, NSMapTable, UIImageView, UIView, AFDCloseFriendsMomentNavigationModel, UIButton;

@interface AFDCloseFriendsMomentNavigationItemStore : NSObject

@property (readonly, nonatomic) UIStackView *cameraContainView;
@property (readonly, nonatomic) UIStackView *editContainView;
@property (readonly, nonatomic) UIButton *addWidgetButton;
@property (readonly, nonatomic) UIButton *flashButton;
@property (readonly, nonatomic) UIButton *beautyButton;
@property (readonly, nonatomic) UIButton *captureRatioButton;
@property (readonly, nonatomic) UIButton *editRatioButton;
@property (readonly, nonatomic) UIButton *brushButton;
@property (readonly, nonatomic) UIButton *textButton;
@property (readonly, nonatomic) UIButton *backButton;
@property (readonly, nonatomic) UIButton *userSettingsButton;
@property (readonly, nonatomic) UIStackView *feedContainView;
@property (readonly, nonatomic) UIButton *scrollToCameraButton;
@property (readonly, nonatomic) UIButton *momentListButton;
@property (readonly, nonatomic) UIButton *afd_searchButton;
@property (readonly, nonatomic) UIButton *memoryButton;
@property (readonly, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) NSMapTable *itemMap;
@property (retain, nonatomic) NSMapTable *itemMapWeak;
@property (readonly, nonatomic) UIButton *closeButton;
@property (readonly, nonatomic) UIButton *addCloseFriendsButton;
@property (readonly, nonatomic) UIButton *addNewWidgetButton;
@property (readonly, nonatomic) UIView *newWidgetButtonRedDotView;
@property (readonly, nonatomic) UIImageView *momentLogo;
@property (retain, nonatomic) AFDCloseFriendsMomentNavigationModel *model;

- (id)buttonItemWithNormalImage:(id)a0;
- (id)itemWithKey:(id)a0 lazyCreate:(id /* block */)a1;
- (id)p_cameraItems;
- (id)p_createContainViewWithItems:(id)a0;
- (id)p_editItems;
- (id)p_createFeedContainView;
- (id)p_createMaskView;
- (id)p_feedItems;
- (id)itemWithKey:(id)a0 isStrongRef:(BOOL)a1 lazyCreate:(id /* block */)a2;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)iconWidth;

@end
