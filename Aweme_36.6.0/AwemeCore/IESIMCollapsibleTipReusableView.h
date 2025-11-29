@class UIStackView, NSString, UIImageView, UILabel, IESIMCollapsibleTipReusableViewModel;
@protocol IESIMCollapsibleTipReusableViewDelegate;

@interface IESIMCollapsibleTipReusableView : UICollectionReusableView <IESIMContactPickerContentSupplementaryViewProtocol, AWEIMPublicGroupReusableViewLifeCycle>

@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *tailIcon;
@property (retain, nonatomic) IESIMCollapsibleTipReusableViewModel *viewModel;
@property (weak, nonatomic) id<IESIMCollapsibleTipReusableViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)config:(id)a0;
- (void)p_bindVM;
- (void)reusableViewWillDisplayAtIndexPath:(id)a0;
- (void)p_didTapView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
