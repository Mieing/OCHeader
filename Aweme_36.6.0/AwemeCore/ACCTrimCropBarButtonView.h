@class ACCTrimCropBarItem, UIView;

@interface ACCTrimCropBarButtonView : UIButton

@property (retain, nonatomic) UIView *selectedDotView;
@property (weak, nonatomic) ACCTrimCropBarItem *barItem;
@property (nonatomic) BOOL hasSelectedState;

- (void)clickAction:(id)a0;
- (id)initWithBarItem:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;

@end
