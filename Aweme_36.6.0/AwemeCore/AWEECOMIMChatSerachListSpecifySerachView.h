@class UILabel, AWEECOMIMChatSerachListSpecifySerachModel, UIView;

@interface AWEECOMIMChatSerachListSpecifySerachView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *itemsBkgView;
@property (retain, nonatomic) AWEECOMIMChatSerachListSpecifySerachModel *specifySerachModel;
@property (copy, nonatomic) id /* block */ clickBlock;

+ (double)itemsBkgViewHeightWithModel:(id)a0;
+ (double)totalHeightWithModel:(id)a0;
+ (double)itemHeight;

- (void)btnSelected:(id)a0;
- (id)generateSpecifySerachLabelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configSpecifySerachViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)itemWidth;
- (void)setupUI;

@end
