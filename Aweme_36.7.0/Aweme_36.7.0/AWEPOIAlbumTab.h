@class UIFont, NSString, UILabel, NSObject, UIView;

@interface AWEPOIAlbumTab : UIView <AWEPOIAlbumCategoryItemProtocol>

@property (retain, nonatomic) NSObject *data;
@property (copy, nonatomic) id /* block */ selectAction;
@property (retain, nonatomic) UIFont *normalFont;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UILabel *tabTitleLabel;
@property (retain, nonatomic) UILabel *tabCountLabel;
@property (retain, nonatomic) UIView *tabContainer;
@property (retain, nonatomic) UIView *container;
@property (nonatomic) double titleLabelWidth;
@property (nonatomic) double countLabelWidth;
@property (nonatomic) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changeToSelectStatus;
- (void)changeToUnSelectStatus;
- (void)onClickAction;
- (long long)textWidth:(id)a0;
- (void)setSelectAction:(id /* block */)a0 data:(id)a1;
- (void)setTabCountText:(id)a0;
- (void)setTabTitleText:(id)a0;
- (double)originTabWidth;
- (void).cxx_destruct;
- (void)setLayoutStyle:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
