@class UIImageView, AWEIMSelectableStatusView, UILabel, UIView;
@protocol IESIMGradientViewProtocol;

@interface AWEIMMediaImagePickerCollectionViewCell : AWEIMMediaPickerCollectionViewCell

@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIView *touchView;
@property (nonatomic) struct CGSize { double width; double height; } touchSize;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *gradientView;
@property (retain, nonatomic) UIView *disableMaskView;
@property (retain, nonatomic) UIImageView *favouriteImageView;
@property (retain, nonatomic) AWEIMSelectableStatusView *selectStatusView;
@property (copy, nonatomic) id /* block */ didTapdSelectedArea;

- (void)createComponents;
- (void)renderWithModel:(id)a0;
- (void)markCellAsDisable:(BOOL)a0;
- (void)tapOnSelectImage:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (void)layoutComponents;

@end
