@class AWEChallengeDescriptionItem, AWEChallengeDownloadInfoModel, UIImageView, UILabel, UIView, YYLabel;
@protocol AWEChallengeDescriptionItemViewDelegate;

@interface AWEChallengeDescriptionItemView : UIView

@property (retain, nonatomic) UILabel *colonLabel;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) UIView *downloadContainerView;
@property (retain, nonatomic) UIImageView *downloadIcon;
@property (retain, nonatomic) UILabel *downloadLabel;
@property (nonatomic) double titleWidth;
@property (retain, nonatomic) AWEChallengeDescriptionItem *item;
@property (retain, nonatomic) AWEChallengeDownloadInfoModel *downloadInfo;
@property (weak, nonatomic) id<AWEChallengeDescriptionItemViewDelegate> delegate;

- (void)setUpWithDescriptionItem:(id)a0 titleWidth:(double)a1;
- (void)setDescriptionItemWithUrlTransfer:(id)a0;
- (void)updateSubviewWith:(double)a0;
- (void)updateDescriptionLabelWithItem:(id)a0;
- (void)updateDownloadContainerWith:(id)a0;
- (BOOL)needAppendEmptyLineWithDownloadComponent:(id)a0;
- (id)appendEmptyLineForDownloadContainer:(id)a0;
- (id)labelAttributedStringWith:(id)a0 textColor:(id)a1;
- (struct CGPoint { double x0; double x1; })calDownloadContainerOffset:(id)a0;
- (double)calDownloadContainerWidth:(id)a0;
- (double)calDownloadContainerOffsetX:(id)a0 descLimitWidth:(double)a1;
- (double)calDownloadContainerOffsetY:(id)a0 descLimitWidth:(double)a1;
- (void)downloadTapGR:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
