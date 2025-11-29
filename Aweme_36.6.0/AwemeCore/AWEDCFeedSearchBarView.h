@class AWEDCFeedPageContext, NSString, UIImageView, CAShapeLayer, UILabel, UIView, UIButton;

@interface AWEDCFeedSearchBarView : UIView <AWEDCFeedSearchBarProtocol>

@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (copy, nonatomic) id /* block */ clickBarEvent;
@property (copy, nonatomic) id /* block */ clickButtonEvent;
@property (copy, nonatomic) id /* block */ searchMagnifierEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (id)getPlaceHolderText;
- (void)setPlaceHolderText:(id)a0;
- (id)createSuperellipsePath;
- (void)searchButtonClickHandler;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupAccessibility;

@end
