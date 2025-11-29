@class UILabel, WCFinderDataItem, UIView, RichTextView, WCFinderLandScapeCoverInfoView;

@interface WCFinderLandScapeTableViewCell : WCFinderLandScapeBasicTableViewCell

@property (retain, nonatomic) WCFinderLandScapeCoverInfoView *coverView;
@property (retain, nonatomic) RichTextView *descLabel;
@property (retain, nonatomic) RichTextView *nickNameLabel;
@property (retain, nonatomic) RichTextView *recommentReasonLabel;
@property (retain, nonatomic) UIView *maskBGView;
@property (retain, nonatomic) UIView *maskCover;
@property (retain, nonatomic) UILabel *playingTipsLabel;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) BOOL showMaskBGView;

+ (id)cellId;
+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubViews;
- (void)updateWithDataItem:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
