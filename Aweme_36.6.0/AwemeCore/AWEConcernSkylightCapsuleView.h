@class NSString, UIImageView, DUXPluralAvatar, UILabel, MASConstraint;

@interface AWEConcernSkylightCapsuleView : UIView <AWEConcernSkylightCapsuleViewProtocol>

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) long long count;
@property (retain, nonatomic) MASConstraint *widthConstraint;
@property (nonatomic) BOOL ignoreDismissLiveView;
@property (nonatomic) BOOL isDismissLiveView;
@property (retain, nonatomic) DUXPluralAvatar *avatarView;
@property (nonatomic) BOOL isShowingAvatar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEConcernModuleServiceDOUYINJXAdapterClass;
+ (BOOL)shouldShowWithFollowFeedDataCount:(long long)a0 liveCount:(long long)a1;
+ (BOOL)enableFollowContainerIndependentVC;
+ (BOOL)shouldShowWithLiveCount:(long long)a0;

- (void)setHidden:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (double)textFontSize;
- (id)aAWEConcernModuleServiceDOUYINJXAdapter;
- (BOOL)enableElderOptimization;
- (id)iconImageWithWidth:(double)a0 color:(id)a1;
- (double)capsuleViewHeight;
- (double)iconRightMargin;
- (double)iconTitleMargin;
- (void)setLiveCount:(long long)a0 needRefreshLayout:(BOOL)a1;
- (void)unreadTitleDynamicConfig:(long long)a0 needRefreshLayout:(BOOL)a1;
- (void)setTitleLabelWithText:(id)a0 needRefreshLayout:(BOOL)a1;
- (BOOL)unreadOptimizationEnable;
- (void)setUnreadDefaultTextNeedRefreshLayout:(BOOL)a0;
- (void)setUpdateLiveCount:(long long)a0 needRefreshLayout:(BOOL)a1;
- (void)updateCapsuleViewWithAvatar;
- (void)updateTextWithActualLiveCount:(long long)a0 unreadData:(id)a1 needRefreshLayout:(BOOL)a2;
- (void)updateCapsuleViewWithoutAvatar;
- (id)getAvailableCount:(long long)a0;
- (void)updateTextWithActualLiveCount:(long long)a0 unreadData:(id)a1 avatarList:(id)a2 updateCount:(long long)a3 completion:(id /* block */)a4;
- (void)showWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)setText:(id)a0 needRefreshLayout:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)maxTitleWidth;
- (double)iconWidth;
- (id)textColor;
- (void)setupUI;
- (void)setDirectionUp:(BOOL)a0;

@end
