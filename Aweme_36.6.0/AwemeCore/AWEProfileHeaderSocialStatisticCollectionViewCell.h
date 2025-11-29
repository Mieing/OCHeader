@class UITapGestureRecognizer, AWEProfileContext, NSString, AWEProfileHeaderContext, NSNumber, AWEProfileSocialStatisticView;
@protocol AWEProfileHeaderSocialStatisticCollectionViewCellDelegate;

@interface AWEProfileHeaderSocialStatisticCollectionViewCell : UICollectionViewCell <AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) AWEProfileSocialStatisticView *socialStatisticView;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) NSNumber *friendsCount;
@property (weak, nonatomic) id<AWEProfileHeaderSocialStatisticCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewChangeToSize:(struct CGSize { double x0; double x1; })a0;
- (id)padService;
- (void)onTapGestureAction:(id)a0;
- (void)handleTapGestureWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)configWithHeaderContext:(id)a0;
- (void)p_updateVsFormatOfficialAccountLayout;
- (id)p_getSocialStatisticConfig;
- (void)updateAllStatisticLabelHidden:(BOOL)a0;
- (void)updateFansCount:(id)a0;
- (void)updateFollowCount:(id)a0;
- (void)updateFriendsCount:(id)a0;
- (void)updateFavoritedCount:(id)a0;
- (id)friendEntrancePopoverHost;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isLoaded;

@end
