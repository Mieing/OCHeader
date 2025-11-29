@class MMUILabel, MMUIView, MMUIImageView;

@interface MMLiveProfileReplayCellDesc : MMUIView

@property (retain, nonatomic) MMUIView *background;
@property (retain, nonatomic) MMUIImageView *iconView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUILabel *paidLabel;
@property (nonatomic) unsigned long long style;

+ (id)getDescFont:(unsigned long long)a0;
+ (id)getDescText:(unsigned long long)a0 data:(id)a1;
+ (struct CGSize { double x0; double x1; })caculateSize:(unsigned long long)a0 data:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutPaid;
- (void)layoutNormal;
- (void)layoutLock;
- (void)layoutWordingAlert;
- (void)layoutHide;
- (void)updateWithDataItem:(id)a0;
- (void).cxx_destruct;

@end
