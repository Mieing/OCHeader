@class MMFinderLiveCreateNoticeReporter, UIImageView, FinderLiveNoticeInfo, UILabel, MMUIButton, UITapGestureRecognizer;
@protocol MMFinderLiveCompleteNoticeViewDelegate;

@interface MMFinderLiveCompleteNoticeView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) MMUIButton *createNoticeButton;
@property (retain, nonatomic) UIImageView *rightChevronView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) MMFinderLiveCreateNoticeReporter *noticeCreationReporter;
@property (retain, nonatomic) FinderLiveNoticeInfo *notice;
@property (weak, nonatomic) id<MMFinderLiveCompleteNoticeViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onNewAnchorTaskGuideWithTaskId:(id)a0 targetItem:(id)a1;
- (void)onTapped;
- (void)onQuickNoticeButtonTapped;
- (void)updateNotice;
- (void).cxx_destruct;

@end
