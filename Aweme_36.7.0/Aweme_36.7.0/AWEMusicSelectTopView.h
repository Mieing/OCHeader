@class AWESearchBar, NSString, UILabel, UIView, UIButton;

@interface AWEMusicSelectTopView : UIView <UISearchBarDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (copy, nonatomic) NSString *lastSearchText;
@property (nonatomic) BOOL searchEditing;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWESearchBar *searchBar;
@property (copy, nonatomic) id /* block */ closeButtonClickedBlock;
@property (copy, nonatomic) id /* block */ searchTextChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleAttributes;

- (void)onCloseButtonClicked;
- (void)beginTextInput;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 subTitle:(id)a2 style:(long long)a3;
- (id)filterMarkedTextWithTextField:(id)a0;
- (void)p_searchText;
- (id)attributedSubTitle;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (id)attributedTitle;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
