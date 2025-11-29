@class NSString, AWECoCreatorModel, UIImageView, LOTAnimationView, UILabel, UIView, AWEAwemeModel;
@protocol AWELiveEntryProtocol, AWEFeedLiveMarkViewProtocol;

@interface AFDRichAwemeFullPageCoCreatorUserCell : UICollectionViewCell <AWELiveVideoFeedUpdateMessage>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) LOTAnimationView *followAnimationView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) AWECoCreatorModel *model;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) id<AWELiveEntryProtocol> liveEntry;
@property (copy, nonatomic) id /* block */ followViewTapped;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ cellTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeForCoCreator:(id)a0;
+ (Class)aAWEFeedInteractionDOUYINHTSAdapterClass;

- (id)roomDataInfo;
- (void)setupNotification;
- (void)playFollowAnimation;
- (void)updateLiveStatusForCurrentVideoWith:(id)a0;
- (void)configureWithModel:(id)a0 awemeModel:(id)a1 showSplitLine:(BOOL)a2;
- (void)onTapGesture:(id)a0;
- (void)onSyncLiveUserNotification:(id)a0;
- (void)startAvatarLiveAnimationIfNeeded;
- (BOOL)isAuthorCoCreator;
- (id)livingMarkViewGradientColors:(BOOL)a0;
- (void)trackShowLiveAvatarView;
- (id)aAWEFeedInteractionDOUYINHTSAdapter;
- (id)createUserModel;
- (void)followAnimationViewTapped;
- (void)liveMarkViewTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)configureConstraints;
- (void)configureSubviews;

@end
