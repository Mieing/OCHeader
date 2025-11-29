@class EmojiRecommendInfo, UIImageView, NSMutableArray, MMUILabel;

@interface StoreEmotionHomePageCollectionCell : UICollectionViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) NSMutableArray *singleEmoticonViewList;
@property (nonatomic) long long emoticonCount;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (retain, nonatomic) EmojiRecommendInfo *recommendInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)createOrUpdateLayout;
- (long long)maxEmoticonCount;
- (void)onTapSingleEmoticonView:(id)a0;
- (void).cxx_destruct;

@end
