@class YYLabel, NSString, UIFont, UIImage, NSAttributedString, UIButton;

@interface AWESharePanelTitleCell : UITableViewCell <AWESharePanelListCell>

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) YYLabel *attributeLabel;
@property (retain, nonatomic) YYLabel *subTitleLabel;
@property (nonatomic) unsigned long long searchBtnStyle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIImage *closeButtonImage;
@property (retain, nonatomic) NSAttributedString *attributeTitle;
@property (copy, nonatomic) id /* block */ closeImageClickCallback;
@property (copy, nonatomic) id /* block */ titleClickCallback;
@property (copy, nonatomic) id /* block */ searchButtonClickCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openMoreSharePanel;
- (void)titleLabelClick;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)tableViewCell;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;
- (void)closeButtonTapped;

@end
