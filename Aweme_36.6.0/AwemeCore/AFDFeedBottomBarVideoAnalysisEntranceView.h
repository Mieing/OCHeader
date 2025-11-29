@class AFDFeedBottomBarVideoAnalysisRollingView, NSString, UIImageView, AWEMultiAvatarView, UILabel, UIView;

@interface AFDFeedBottomBarVideoAnalysisEntranceView : UIView <AFDFeedBottomBarVideoAnalysisEntranceViewProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIImageView *analysisIcon;
@property (retain, nonatomic) UILabel *inspirationRollingLabel;
@property (retain, nonatomic) UILabel *playCountLabel;
@property (retain, nonatomic) UIView *avatarAndPlayCountView;
@property (retain, nonatomic) AWEMultiAvatarView *avatarView;
@property (retain, nonatomic) AFDFeedBottomBarVideoAnalysisRollingView *rollingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playRollingAnimationWithModel:(id)a0;
- (void)updateVideoAnalysisEntranceViewForModel:(id)a0;
- (void)configAvatarAndPlayCountViewWithAvatars:(id)a0 playCount:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
