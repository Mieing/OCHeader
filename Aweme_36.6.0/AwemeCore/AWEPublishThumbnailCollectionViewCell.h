@class UIImageView, UILabel, UIView;

@interface AWEPublishThumbnailCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *coverTagLbl;
@property (retain, nonatomic) UIView *coverTagView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *chooseCoverView;
@property (retain, nonatomic) UILabel *chooseCoverTextLbl;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) BOOL coverBindFirstImage;
@property (nonatomic) BOOL cancelShowChooseCoverAnimation;
@property (copy, nonatomic) id /* block */ chooseCoverBlock;

+ (id)cellID;

- (void)showBorderView;
- (void)showChooseCoverWithAnimated:(BOOL)a0;
- (void)configWithImage:(id)a0 index:(unsigned long long)a1 isCover:(BOOL)a2 showChooseCover:(BOOL)a3;
- (void)showCoverTag:(BOOL)a0;
- (void)hiddenChooseCoverWithAnimated:(BOOL)a0;
- (id)chooseCoverText;
- (void)chooseCoverAction;
- (void)updateCoverText:(id)a0;
- (void)showImageViewBorder;
- (void)configWithImage:(id)a0 index:(unsigned long long)a1 isCover:(BOOL)a2 showChooseCover:(BOOL)a3 modelType:(unsigned long long)a4;
- (void)hiddenBorderView;
- (BOOL)shouldAddBorderView;
- (void)configWithImage:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
