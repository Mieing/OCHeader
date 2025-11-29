@class MMFinderLiveFansGroupInvisibleTipView, MMUILabel, MMWebImageView;

@interface MMFinderLiveFansGroupFanNoticeCell : MMFinderLiveFansGroupDetailBaseTableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) MMWebImageView *noticeImageView;
@property (retain, nonatomic) MMFinderLiveFansGroupInvisibleTipView *invisibleTipView;
@property (copy, nonatomic) id /* block */ onViewImageCallback;

+ (double)cellHeightWithDesc:(id)a0 imageUrlString:(id)a1 maxWidth:(double)a2;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configWithDesc:(id)a0 imageUrlString:(id)a1;
- (void)setInvisible:(BOOL)a0 invisibleTips:(id)a1;
- (void)layoutSubviews;
- (void)initUI;
- (void)onTapImageView:(id)a0;
- (void).cxx_destruct;

@end
