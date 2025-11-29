@class UIButton, NSString, IESECShopSearchBar;
@protocol IESECShopSearchNavViewDelegate;

@interface IESECShopSearchNavView : UIView <IESECShopSearchBarDelegate>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) IESECShopSearchBar *searchBar;
@property (weak, nonatomic) id<IESECShopSearchNavViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ searchBarRightCustomButtonTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
