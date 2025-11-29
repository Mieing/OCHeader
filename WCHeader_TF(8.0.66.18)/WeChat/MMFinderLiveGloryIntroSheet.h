@class MMWebImageView, MMUIImageView, UIImageView, MMFinderLiveTaskId, UIScrollView, MMUIButton, MMUILabel;
@protocol MMFinderLiveGloryIntroSheetDelegate;

@interface MMFinderLiveGloryIntroSheet : MMPageSheetBaseView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveGloryIntroSheetDelegate> delegate;
@property (retain, nonatomic) UIScrollView *contentsContainerView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) UIImageView *introImageView;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *confirmButton;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) MMUIImageView *headImageBoarderView;
@property (nonatomic) int showSource;

+ (id)showWithTaskId:(id)a0 delegate:(id)a1;

- (id)initWithTaskId:(id)a0 delegate:(id)a1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (id)liveTask;
- (BOOL)userFinderStyle;
- (id)currentContactHeadURL;
- (void)confirmAction;
- (void)cancelAction;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
