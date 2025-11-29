@class WCFinderAuthorContactView, UIView, FinderPaidCollectionInfo, UILabel, RichTextView, MMWebImageView;

@interface WCFinderPaidCollectionCell : UITableViewCell

@property (retain, nonatomic) MMWebImageView *coverImgView;
@property (retain, nonatomic) RichTextView *titleView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) WCFinderAuthorContactView *contactView;
@property (retain, nonatomic) UIView *seperatorLine;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollection;
@property (nonatomic) BOOL isLastCell;

+ (double)titleMaxWidthWithWidth:(double)a0;
+ (double)cellHeightWithPaidCollection:(id)a0 width:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)setupUI;
- (void)updateWithPaidCollection:(id)a0 isLastCell:(BOOL)a1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
