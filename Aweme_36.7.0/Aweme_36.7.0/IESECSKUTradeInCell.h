@class UILabel, IESECSKUTradeModel, UIView;
@protocol IESECSKUTradeInCellDelegate;

@interface IESECSKUTradeInCell : UIView

@property (weak, nonatomic) id<IESECSKUTradeInCellDelegate> delegate;
@property (retain, nonatomic) IESECSKUTradeModel *model;
@property (retain, nonatomic) UILabel *content;
@property (retain, nonatomic) UILabel *subContent;
@property (retain, nonatomic) UIView *topTagView;
@property (retain, nonatomic) UILabel *benefitLabel;
@property (retain, nonatomic) UIView *bgView;

- (void)clickItem;
- (void)updateWithModel:(id)a0 atmosphereColor:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
