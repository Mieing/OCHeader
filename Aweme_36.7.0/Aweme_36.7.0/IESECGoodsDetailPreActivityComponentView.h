@class IESECGoodsActivityNoticeView;

@interface IESECGoodsDetailPreActivityComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) IESECGoodsActivityNoticeView *preActivityNoticeView;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void).cxx_destruct;

@end
