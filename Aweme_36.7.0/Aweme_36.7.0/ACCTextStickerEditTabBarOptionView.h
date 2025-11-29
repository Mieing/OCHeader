@class UIImageView, UILabel, NSString;

@interface ACCTextStickerEditTabBarOptionView : UIView <ACCTextEditToolOptionView>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL selected;
@property (nonatomic) unsigned long long toolbarType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCellWithTitle:(id)a0 iconName:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (id)initWithOption:(id)a0;

@end
