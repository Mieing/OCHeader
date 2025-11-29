@class UIControl, UIImageView, LSIMChatPanelUIConfig, UILabel, LSIMInputActionModel;

@interface LSIMChatPanelCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIControl *button;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) LSIMInputActionModel *model;
@property (retain, nonatomic) LSIMChatPanelUIConfig *panelUIConfig;

+ (id)identifier;

- (void)bindModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
