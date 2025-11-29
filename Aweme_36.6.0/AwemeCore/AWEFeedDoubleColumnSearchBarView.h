@class NSString, UIImageView, AWEDCFeedPageContext, UILabel, UIView;

@interface AWEFeedDoubleColumnSearchBarView : UIView <AWEDCFeedSearchBarProtocol>

@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *searchBarContainer;
@property (retain, nonatomic) UILabel *searchTitleLabel;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UIImageView *searchContainerInnerIcon;
@property (nonatomic) long long style;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (copy, nonatomic) id /* block */ clickBarEvent;
@property (copy, nonatomic) id /* block */ clickButtonEvent;
@property (copy, nonatomic) id /* block */ searchMagnifierEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lightTitleIconURL;
+ (id)darkTitleIconURL;
+ (double)fontSize:(double)a0;

- (void)awe_themeWillChange:(long long)a0;
- (id)getPlaceHolderText;
- (void)setPlaceHolderText:(id)a0;
- (void)setupSearchBarContainer;
- (id)initWithStyle:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
