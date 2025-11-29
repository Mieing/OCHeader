@class AWECoCreatorDetailCellModel, NSString, UIImageView, DUXButton, UILabel, UIView;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWECoCreatorDetailCell : UITableViewCell <AWELiveVideoFeedUpdateMessage>

@property (retain, nonatomic) UIView *identityView;
@property (retain, nonatomic) UILabel *identityLabel;
@property (retain, nonatomic) UIView *userInfoContainer;
@property (retain, nonatomic) UILabel *followerCountLabel;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isInGrayState;
@property (retain, nonatomic) AWECoCreatorDetailCellModel *cellModel;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIImageView *avatorImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXButton *mainButton;
@property (retain, nonatomic) DUXButton *minorButton;
@property (copy, nonatomic) id /* block */ mainButtonHandler;
@property (copy, nonatomic) id /* block */ minorButtonHandler;
@property (copy, nonatomic) id /* block */ liveShowTrackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedInteractionDOUYINHTSAdapterClass;
+ (id)identifier;

- (void)setupNotification;
- (void)updateLiveStatusForCurrentVideoWith:(id)a0;
- (void)onSyncLiveUserNotification:(id)a0;
- (void)startAvatarLiveAnimationIfNeeded;
- (id)livingMarkViewGradientColors:(BOOL)a0;
- (id)aAWEFeedInteractionDOUYINHTSAdapter;
- (void)liveMarkViewTapped;
- (void)configureNewSubviews;
- (void)updateUIToGrayStateIfNeeded:(BOOL)a0;
- (void)configureFollowButton;
- (void)addTitleLabelTextWithModel:(id)a0;
- (void)addFollowerLabelTextWithModel:(id)a0;
- (void)updateUIForLandscape;
- (void)mainButtonTapped;
- (void)minorButtonTapped;
- (void)configureWithModel:(id)a0 landscape:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;

@end
