@class AWEScrollStringLabel, UIImageView, UIView, UILabel;

@interface AWEStickerPickerOneClickFilmCell : AWEStickerPickerStickerPropNameCell

@property (retain, nonatomic) AWEScrollStringLabel *ocfNameLabel;
@property (retain, nonatomic) UIView *cutContainerView;
@property (retain, nonatomic) UIImageView *cutIconView;
@property (retain, nonatomic) UILabel *cutLabel;

- (void)updateUIConfig:(id)a0;
- (id)propNameLabel;
- (double)propNameFontSize;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setSticker:(id)a0;

@end
