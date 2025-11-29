@class WCFinderAuthorContactRecommendView, UIView, WCFinderStaticCoverInfoView, _TtC6WeChat25WCFinderSimpleProgressBar, MMWebImageView, WCFinderFeedContentVM, NSString, WCFinderLandScapeCardCellStyle, RichTextView, UILabel;
@protocol WCFinderLandScapeBidCardTableViewCellDelegate;

@interface WCFinderLandScapeBidCardTableViewCell : WCFinderLandScapeBasicTableViewCell <WCFinderGlobalPlaybackInfoExt>

@property (retain, nonatomic) MMWebImageView *coverView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) RichTextView *descLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) WCFinderStaticCoverInfoView *infoView;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) UILabel *maskLabel;
@property (retain, nonatomic) WCFinderAuthorContactRecommendView *contactView;
@property (retain, nonatomic) _TtC6WeChat25WCFinderSimpleProgressBar *progressBar;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderLandScapeCardCellStyle *style;
@property (weak, nonatomic) id<WCFinderLandScapeBidCardTableViewCellDelegate> bigCardCellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellId;
+ (double)cellHeightWithDataItem:(id)a0 viewW:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)setupSubViews;
- (void)setShowMaskView:(BOOL)a0;
- (void)prepareForReuse;
- (void)updateWithContentVM:(id)a0;
- (void)updateWithContentVM:(id)a0 style:(id)a1;
- (void)layoutSubviews;
- (double)backViewWidth;
- (id)recommendReasonColor;
- (void)onFinderDataItemUpdate:(id)a0;
- (void)onGlobalPlaybackInfoUpdatedWithTid:(id)a0 playInfo:(id)a1;
- (void).cxx_destruct;

@end
