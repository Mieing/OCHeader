@class MMUILabel, AttributeLabel, MMWebImageView, MMHeadImageView;

@interface FTSWeShopCell : MMTableViewCell

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) AttributeLabel *titleLabel;
@property (retain, nonatomic) MMWebImageView *rIconImageView;
@property (retain, nonatomic) MMUILabel *tagLabel;
@property (retain, nonatomic) AttributeLabel *detailLabel;
@property (nonatomic) BOOL isTopHits;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateWithItem:(id)a0 keywords:(id)a1 isTopHits:(BOOL)a2;
- (void)layoutSubviews;
- (id)tagTextForTagType:(unsigned int)a0;
- (void).cxx_destruct;

@end
