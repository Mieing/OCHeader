@class UILabel, UIImageView, NSString;
@protocol AWEIMBaseCollectionViewEventProtocol, AWEIMBaseCollectionViewViewModelProtocol;

@interface AWEIMVerticalMutiableGIFEmoticonCollectionViewCell : UICollectionViewCell <AWEIMVerticalMutiableGIFEmoticonCollectionViewCellProtocol>

@property (retain, nonatomic) UILabel *emotionLabel;
@property (retain, nonatomic) UIImageView *emoticonImageView;
@property (retain, nonatomic) id<AWEIMBaseCollectionViewViewModelProtocol> viewModel;
@property (weak, nonatomic) id<AWEIMBaseCollectionViewEventProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellReuseIdentifier;

- (void)stopAnimationIfNeed;
- (void)startAnimationIfNeed;
- (id)currentCellId;
- (void)layoutSubviewsFrame;
- (id)emoticonBDImageView;
- (void)configWithViewModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (long long)__scene;

@end
