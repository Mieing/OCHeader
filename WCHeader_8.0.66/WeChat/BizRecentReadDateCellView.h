@class MMUILabel;

@interface BizRecentReadDateCellView : MMTableViewCell

@property (retain, nonatomic) MMUILabel *dateLabel;
@property (nonatomic) long long paddingTop;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)applyData:(id)a0 atIndex:(long long)a1 withAnimation:(BOOL)a2;
- (void)configureLayout;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (id)getDateLabelText;
- (void).cxx_destruct;

@end
