@class UIView;

@interface IESECBFFSliceCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) UIView *content;
@property (copy, nonatomic) id /* block */ calFrame;
@property (nonatomic) struct IESECSliceXFlexEdgeInset { struct IESECSliceXFlexValue { float value; unsigned long long unit; } top; struct IESECSliceXFlexValue { float value; unsigned long long unit; } bottom; struct IESECSliceXFlexValue { float value; unsigned long long unit; } left; struct IESECSliceXFlexValue { float value; unsigned long long unit; } right; } padding;
@property (nonatomic) struct IESECSliceXFlexEdgeInset { struct IESECSliceXFlexValue { float value; unsigned long long unit; } top; struct IESECSliceXFlexValue { float value; unsigned long long unit; } bottom; struct IESECSliceXFlexValue { float value; unsigned long long unit; } left; struct IESECSliceXFlexValue { float value; unsigned long long unit; } right; } margin;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
