@class MMUILabel, LotteryGiftInfo, MMWebImageView;

@interface MMLiveLotteryDetailCardGiftCell : UICollectionViewCell

@property (retain, nonatomic) LotteryGiftInfo *giftInfo;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long giftCount;
@property (retain, nonatomic) MMWebImageView *webImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (nonatomic) BOOL isSameGift;

+ (id)identifier;
+ (double)getTitleWidthWithTitle:(long long)a0 type:(unsigned long long)a1 textColor:(id)a2 isSameGift:(BOOL)a3 giftCount:(long long)a4 height:(double)a5;
+ (id)getCurrentAttributedStringWithTitle:(id)a0 type:(unsigned long long)a1 textColor:(id)a2 isSameGift:(BOOL)a3 giftCount:(long long)a4;
+ (id)getTitleLabelFontWithSize:(double)a0;
+ (id)getTitleStringWithString:(id)a0 font:(id)a1 numFont:(id)a2 textColor:(id)a3;

- (void)updateWithLotteryGift:(id)a0 type:(unsigned long long)a1 giftCount:(long long)a2 isSameGift:(BOOL)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createUI;
- (void)layoutUI;
- (void)layoutWebImageView;
- (void)layoutTitleLabel;
- (void).cxx_destruct;

@end
