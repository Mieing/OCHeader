@class UIButton, IESECWinSearchBar;
@protocol IESECWinSearchNavViewDelegate;

@interface IESECWinSearchNavView : UIView <IESECWinSearchBarDelegate>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) IESECWinSearchBar *searchBar;
@property (weak, nonatomic) id<IESECWinSearchNavViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ searchBarRightCustomButtonTappedBlock;

- (void)shopSearchBarTextDidBeginEditing:(id)a0;
- (void)shopSearchBar:(id)a0 textDidChange:(id)a1;
- (void)shopSearchBarSearchButtonClicked:(id)a0;
- (void)shopSearchBarCameraButtonClicked:(id)a0;
- (void)searchButtonTapped;
- (void)convertResultState:(BOOL)a0;
- (void).cxx_destruct;
- (void)setPlaceholder:(id)a0;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)backButtonTapped;

@end
