@class UIView, MMWebImageView, GCRoleInfoView, UITapGestureRecognizer, PAGView, UIImageView, UIButton, GCChatCellPublishBottomView, GCChatCellVoteView, NSString, UILabel, MMUIActivityIndicatorView;

@interface GCChatBaseCell : GCBaseCollectionViewCell <GCChatCellPublishBottomViewDelegate>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) GCRoleInfoView *roleInfoView;
@property (retain, nonatomic) MMWebImageView *roleIcon;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UIImageView *sendFailView;
@property (retain, nonatomic) UIView *statusBgView;
@property (retain, nonatomic) MMWebImageView *statusIcon;
@property (retain, nonatomic) UILabel *debugLabel;
@property (retain, nonatomic) GCChatCellVoteView *voteView;
@property (retain, nonatomic) UIButton *channelBtn;
@property (retain, nonatomic) GCChatCellPublishBottomView *publishBottomView;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapOnHead;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapOnHead;
@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) UIView *headTickleMaskView;
@property (retain, nonatomic) MMWebImageView *headImgView;
@property (retain, nonatomic) UIView *nameLineView;
@property (retain, nonatomic) UIView *headLineView;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UIView *midContentContainerView;
@property (retain, nonatomic) UIView *subClassContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateiPadCellWidth:(double)a0;
+ (void)calculateLayoutIfNeed:(id)a0;
+ (void)onCalculatLayoutInfo:(id)a0;
+ (struct CGSize { double x0; double x1; })ceilSize:(struct CGSize { double x0; double x1; })a0;
+ (double)maxNameWidth;
+ (double)maxContentWidth;
+ (double)spaceBetweenTagAndRole;
+ (struct CGSize { double x0; double x1; })sizeForStr:(id)a0 font:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleChannelLabelTap;
- (id)chatBaseCellModel;
- (void)onHeadImgTap;
- (id)tickleLastTimeKey;
- (id)lastStrongTickleMeDateKey:(id)a0;
- (void)someoneTickleAtMeBy:(id)a0;
- (void)onHeadImgDoubleClick;
- (void)addMaskWhenTickleAnimation;
- (void)showStrongTickleAnimation;
- (void)showNormalTickleAnimation;
- (void)onRoleInfoTap;
- (double)getCornerRadius;
- (void)onUserDataDictUpdate:(id)a0;
- (id)getBubbleViewColor:(id)a0;
- (void)endHighLightAnimation;
- (void)configureSubClassContentView:(id)a0;
- (void)configureWithCellModel:(id)a0;
- (void)configurePublishChoosenView:(id)a0 leftStartX:(double)a1;
- (BOOL)shouldBubbleViewClipsToBounds;
- (void)configureVoteView:(id)a0;
- (void)onRightLightImageClick;
- (void)configureRightView:(id)a0 show:(BOOL)a1;
- (void)showFailView:(BOOL)a0;
- (void)onSendFailImgTap;
- (void)showLoadingView:(BOOL)a0;
- (void)innerShowLoadingView:(BOOL)a0;
- (void)choosenBarDidClickJumpUrl;
- (void)choosenBarDidClickPublish;
- (void).cxx_destruct;

@end
