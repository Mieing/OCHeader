@class AWEIMDoubleAvatarView, AWEIMShareModel, NSDictionary, NSString, NSLayoutConstraint, DUXBaseLabel;
@protocol AWEIMTranspondListRecentSharedCellActionDelegate;

@interface AWEIMTranspondListRecentSharedCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEIMDoubleAvatarView *avatarView;
@property (retain, nonatomic) DUXBaseLabel *nameLabel;
@property (retain, nonatomic) DUXBaseLabel *descriptionLabel;
@property (retain, nonatomic) NSDictionary *displayConfig;
@property (nonatomic) BOOL enableUITextConfig;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) AWEIMShareModel *recentSharedShareModel;
@property (nonatomic) BOOL isFromSharePanel;
@property (weak, nonatomic) id<AWEIMTranspondListRecentSharedCellActionDelegate> delegate;
@property (nonatomic) BOOL isEcommerceRedPackShareIM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configWithIsHot:(BOOL)a0;
+ (id)identifier;

- (void)updateWithRecentSharedList:(id)a0;
- (void)recentSharedTapped:(id)a0;
- (void)p_setAccessibilityText;
- (void)p_setupUI;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;

@end
