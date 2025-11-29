@class UIStackView, NSString, CAShapeLayer, UIImageView, UILabel, UIView, MMUIButton;

@interface WCFinderMSActionToolBarCell : WCFinderMSActivityBaseCell <WCFinderFeedContentVMExt, WCFinderDataItemExt>

@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) CAShapeLayer *ovalShapeLayer;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIStackView *normalStackView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *stickyTopIcon;
@property (retain, nonatomic) MMUIButton *moreButton;
@property (retain, nonatomic) UIStackView *actionStackView;
@property (retain, nonatomic) MMUIButton *likeButton;
@property (retain, nonatomic) MMUIButton *commentButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })calculateDisplaySize:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1 cellIdentifier:(id)a2 showSceneIntroduce:(BOOL)a3;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUploadingStackView;
- (void)setupNormalStackView;
- (void)setupActionStackView;
- (id)createAcitonButton:(id)a0 iconSize:(double)a1 iconColor:(id)a2 action:(SEL)a3;
- (void)prepareForReuse;
- (void)setupLayout;
- (void)onContentVMChanged;
- (void)updateProgress:(double)a0;
- (void)onClickLike;
- (void)onClickComment;
- (void)onClickMore;
- (void)onFeedContent:(id)a0 favDataChanged:(id)a1;
- (void)onFeedContent:(id)a0 commentDataChanged:(id)a1;
- (id)favCount:(id)a0;
- (id)commentCount:(id)a0;
- (void)onLongPress:(id)a0;
- (void)onFinderDataItemPostProgressWithTid:(id)a0 progress:(id)a1;
- (void)onFeedContentStickyTopStatueChanged:(id)a0;
- (void).cxx_destruct;

@end
