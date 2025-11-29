@class ACCTrimCropBarItem;

@interface ACCTrimCropToolBarButtonView : UIButton

@property (weak, nonatomic) ACCTrimCropBarItem *barItem;

- (void)clickAction:(id)a0;
- (id)initWithBarItem:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;

@end
