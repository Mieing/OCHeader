@class AWEPOICollectView, UIView;

@interface AWEPOISimpleCollectView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) AWEPOICollectView *collectView;

- (void)setCollected:(BOOL)a0 animated:(BOOL)a1;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)init;

@end
