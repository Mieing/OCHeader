@class FinderJumpInfo_NativeInfo, UIImageView, MMUIView, MMFinderLiveTaskId, MMUIButton, MMUILabel;
@protocol MMLiveCNYSharePopupViewDelegate;

@interface MMLiveCNYSharePopupView : MMUIView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) FinderJumpInfo_NativeInfo *oriInfo;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUIView *shareContentCard;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) MMUILabel *shareTitleLabel;
@property (retain, nonatomic) MMUILabel *shareIntroductionLabel;
@property (retain, nonatomic) MMUILabel *shareIntroductionSponsorLabel;
@property (retain, nonatomic) UIImageView *shareResultPreviewView;
@property (retain, nonatomic) MMUIButton *shareActionBtn;
@property (retain, nonatomic) MMUILabel *sponsorInfoLabel;
@property (retain, nonatomic) MMUIButton *exitButton;
@property (nonatomic) BOOL notUpdate;
@property (weak, nonatomic) id<MMLiveCNYSharePopupViewDelegate> delegate;

+ (id)showIn:(id)a0 delegate:(id)a1 taskId:(id)a2 info:(id)a3;

- (id)initWithTaskId:(id)a0 info:(id)a1;
- (void)setupViews;
- (void)showIn:(id)a0;
- (void)_internalShowIn:(id)a0;
- (void)close;
- (void)internalClose;
- (void)_internalClose;
- (void)closeBtnAction;
- (void)onClickShareActionBtn;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutShareContent;
- (void)setupSponsorInfoLabel;
- (void)setupShareIntroductionSponsorLabel;
- (id)sponsorFont;
- (void)configSponsorLabel;
- (id)createTitleAttributedStr;
- (id)createIntroductionDisplayStr;
- (id)createIntroductionSponsorDisplayStr;
- (void).cxx_destruct;

@end
