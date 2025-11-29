@class NSString, MMLoadingIndicatorView, UIImageView, MMCircleProgressView, UILabel, MMUIButton, UIButton;

@interface ChatFileProcessingViewController : ChatFileBaseViewController <MMCircleProgressViewDelegate>

@property (retain, nonatomic) UIImageView *fileTypeImageView;
@property (retain, nonatomic) UILabel *filenameLabel;
@property (retain, nonatomic) UILabel *fileSizeLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) MMLoadingIndicatorView *loadingIndicator;
@property (retain, nonatomic) MMCircleProgressView *circleProgressView;
@property (retain, nonatomic) UIButton *downloadButton;
@property (retain, nonatomic) UIButton *previewButton;
@property (retain, nonatomic) MMUIButton *previewActionLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (nonatomic) BOOL canPreview;
@property (retain, nonatomic) UIButton *otherAppButton;
@property (retain, nonatomic) UIButton *weappButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidAppear:(BOOL)a0;
- (void)refreshMoreEntrance;
- (void)setupUI;
- (void)layoutUI;
- (void)refreshUI;
- (void)onTaskProgress:(int)a0;
- (void)onTaskCompleted;
- (void)downloadClicked;
- (void)previewClicked;
- (void)circleProgressViewDidTapped:(id)a0;
- (void).cxx_destruct;

@end
