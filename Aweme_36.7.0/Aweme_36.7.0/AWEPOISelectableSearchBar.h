@class NSString, UIImageView, UILabel, UIView;
@protocol AWEPOISelectableSearchBarDelegate;

@interface AWEPOISelectableSearchBar : AWECommonSearchBar

@property (nonatomic) unsigned long long selectableType;
@property (retain, nonatomic) UILabel *selectAreaLabel;
@property (retain, nonatomic) UIImageView *upDownArrowImageView;
@property (retain, nonatomic) UIView *seperateView;
@property (weak, nonatomic) id<AWEPOISelectableSearchBarDelegate> delegate;
@property (retain, nonatomic) NSString *selectAreaText;

- (void)p_changeSearchBarIconImage;
- (void)p_addSelectableView;
- (void)handleTapSelectAreaGes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectableType:(unsigned long long)a1;
- (void)showSelectableView;
- (void)hideSelectableView;
- (void)rotateArrowImageView;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
