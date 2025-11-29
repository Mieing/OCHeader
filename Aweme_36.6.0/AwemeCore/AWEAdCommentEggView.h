@class AWEAdItemCommentEggModel, BDImageView, NSString, UIButton;

@interface AWEAdCommentEggView : UIView <AWEAdCommentEggView>

@property (nonatomic) unsigned long long eggType;
@property (retain, nonatomic) AWEAdItemCommentEggModel *eggModel;
@property (weak, nonatomic) BDImageView *eggImageView;
@property (nonatomic) double displayTime;
@property (nonatomic) double clickTime;
@property (copy, nonatomic) id /* block */ clickImageBlock;
@property (retain, nonatomic) UIButton *clickCloseButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickImage;
- (void)updateViewWithCommentEggModel:(id)a0 finishBlock:(id /* block */)a1 loopBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)remove;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
