@class UIView, MMWebImageView, MMFinderLiveRewardGiftItem, NSString, UIImageView, MMFinderLiveTaskId, CAGradientLayer, MMUILabel, MMUIButton, UIScrollView;
@protocol MMFinderLiveGiftWallIntroSheetDelegate;

@interface MMFinderLiveGiftWallIntroSheet : MMPageSheetBaseView <MMFinderLiveGiftResourceMgrExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveGiftWallIntroSheetDelegate> delegate;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) UIScrollView *scrollContentView;
@property (retain, nonatomic) UIImageView *introImageView;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *confirmButton;
@property (retain, nonatomic) UIView *bottomBackgroundView;
@property (retain, nonatomic) UIView *gradientBackgroundView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) UIView *topOneUserView;
@property (retain, nonatomic) CAGradientLayer *topOneUserGradientLayer;
@property (retain, nonatomic) MMWebImageView *giftImageView;
@property (nonatomic) int showSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithTaskId:(id)a0 gift:(id)a1 delegate:(id)a2;

- (id)initWithTaskId:(id)a0 gift:(id)a1 delegate:(id)a2;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentHeight;
- (id)liveTask;
- (BOOL)userFinderStyle;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (id)currentContactHeadURL;
- (void)confirmAction;
- (void)cancelAction;
- (void)onClickGiftImageView;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
