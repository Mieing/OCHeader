@class UILabel, UIView;

@interface WCMomentsShareScopeSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (double)heightForTitle:(id)a0 headerViewWidth:(double)a1;

- (void)updateHeaderViewWithWidth:(double)a0 title:(id)a1;
- (void)_initViewWithWidth:(double)a0;
- (void).cxx_destruct;

@end
