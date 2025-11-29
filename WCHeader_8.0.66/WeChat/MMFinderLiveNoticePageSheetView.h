@class UILabel, MMUIImageView, NSString, MMWebImageView, FinderLiveNoticeInfo, WCFinderJumpInfoDynamicCarouselLiveNoticeViewModel, MMUIButton, UIScrollView;

@interface MMFinderLiveNoticePageSheetView : MMPageSheetBaseView <WCFinderLiveExt>

@property (retain, nonatomic) WCFinderJumpInfoDynamicCarouselLiveNoticeViewModel *dynamicCarouselLiveNoticeViewModel;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIImageView *detailIconImageView;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (readonly, copy, nonatomic) NSString *finderUsername;
@property (readonly, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (copy, nonatomic) id /* block */ didClickActionButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createIconImageView;
+ (id)createTitleLabel;
+ (id)createDetailIconImageView;
+ (id)createDetailLabel;
+ (id)createActionButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finderUsername:(id)a1 noticeInfo:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finderUsername:(id)a1 dynamicCarouselLiveNoticeViewModel:(id)a2;
- (void)_init;
- (void)_initPageSheet;
- (void)loadContentView;
- (void)updateSubviews;
- (void)fitSizeAndLayout;
- (void)didClickActionButton:(id)a0;
- (void)layoutSubviews;
- (void)onFinderLiveNoticeWithNoticeId:(id)a0 reserveStateChanged:(unsigned long long)a1;
- (void).cxx_destruct;

@end
