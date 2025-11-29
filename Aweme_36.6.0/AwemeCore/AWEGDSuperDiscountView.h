@class NSString, UIImageView, AWEGDImagePointModel, UILabel, UIView;

@interface AWEGDSuperDiscountView : UIView <AWEGDImagePointProtocol>

@property (retain, nonatomic) NSString *avatarImage;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWEGDImagePointModel *model;
@property (retain, nonatomic) UIView *superDiscountContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })calculateContainerSize;
- (void)updateSuperDiscountData:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)updateModel:(id)a0;

@end
