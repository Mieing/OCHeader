@class UIImageView, NSString, UILabel;

@interface ACCTextTemplateSwitchView : UIView <ACCTextEditToolOptionView>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL selected;
@property (nonatomic) unsigned long long toolbarType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)switchTitleLabel;
+ (id)switchIconViewWithOption:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeWithTitle:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithOption:(id)a0;

@end
