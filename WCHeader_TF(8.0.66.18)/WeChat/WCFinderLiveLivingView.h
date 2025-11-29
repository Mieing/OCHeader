@class UILabel, RichTextView, MMFinderLiveContentVM, WCFinderHeadImageView, UIView, FinderLiveNoticeListInfo, WCFinderLiveLivingItemView;
@protocol WCFinderLiveLivingViewDelegate;

@interface WCFinderLiveLivingView : UIView

@property (retain, nonatomic) MMFinderLiveContentVM *contentVM;
@property (retain, nonatomic) FinderLiveNoticeListInfo *noticeListInfo;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) WCFinderLiveLivingItemView *mainItemView;
@property (retain, nonatomic) UIView *anchorHeadBackView;
@property (retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView;
@property (retain, nonatomic) UIView *nowLiveView;
@property (retain, nonatomic) UILabel *nowLiveLabel;
@property (retain, nonatomic) UILabel *startTimeLabel;
@property (retain, nonatomic) RichTextView *introductionTextView;
@property (retain, nonatomic) WCFinderLiveLivingItemView *moreNoticesItemView;
@property (retain, nonatomic) UILabel *moreNoticesLabel;
@property (nonatomic) struct CGSize { double width; double height; } cacheSize;
@property (weak, nonatomic) id<WCFinderLiveLivingViewDelegate> delegate;

+ (double)detailViewMarginRight;
+ (double)heightWithContentVM:(id)a0 noticeListInfo:(id)a1 width:(double)a2 scene:(unsigned long long)a3;
+ (BOOL)showsMoreNoticesWithNoticeList:(id)a0;
+ (id)titleFontInScene:(unsigned long long)a0;
+ (id)descColorInScene:(unsigned long long)a0;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)layoutUI;
- (void)initMainItemView;
- (void)initAnchorHeadImageView;
- (void)initNowLiveView;
- (void)initStartTimeLabel;
- (void)initIntroductionTextView;
- (void)initMoreNoticesItemView;
- (void)initMoreNoticesLabel;
- (void)onMainItemClicked:(id)a0;
- (void)onMoreNoticesButtonClicked:(id)a0;
- (void)updateWithContentVM:(id)a0 noticeListInfo:(id)a1 scene:(unsigned long long)a2;
- (void)updateCardAccessibility;
- (id)cardAccessibilityLabel;
- (void).cxx_destruct;

@end
