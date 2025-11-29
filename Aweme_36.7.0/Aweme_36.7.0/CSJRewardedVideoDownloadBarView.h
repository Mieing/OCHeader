@class CSJMaterialMeta, UIButton, UIImageView, CSJStarView, UILabel, NSString, CSJAdSlot;
@protocol CSJRewardedVideoDownloadBarDelegate;

@interface CSJRewardedVideoDownloadBarView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *evaluationLabel;
@property (retain, nonatomic) UIButton *downloadButton;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) CSJStarView *starView;
@property (nonatomic) BOOL isPortrait;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) unsigned long long downloadBarStyle;
@property (weak, nonatomic) id<CSJRewardedVideoDownloadBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadButtonTapped;
- (id)initDownloadBarWith:(id)a0 slot:(id)a1 barStyle:(unsigned long long)a2;
- (void)downloadTapped;
- (void)layoutNewStyle;
- (void)layoutOldStyle;
- (void)layoutNewWithDescStyle;
- (void)addAccessibilityIdentifier;
- (void)buildUpView;
- (void)addGesture;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)buttonText;

@end
