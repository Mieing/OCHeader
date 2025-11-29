@class DUXNavigationBar, NSString, UIButton, UIImageView, UILabel, DUXNavigationBarImageAction;

@interface AWEACLView : UIView

@property (nonatomic) long long itemType;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *topTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *buttonDesc;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) id /* block */ buttonClickCallback;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) DUXNavigationBar *duxNaviBar;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxImageAction;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *descLabel;

- (void)initView;
- (void)openButtonClicked;
- (id)initWithButtonDesc:(id)a0 title:(id)a1 imageName:(id)a2 desc:(id)a3 topTitle:(id)a4 itemType:(long long)a5 pageType:(long long)a6 buttonClickCallback:(id /* block */)a7 action:(id /* block */)a8;
- (void).cxx_destruct;

@end
