@class UILabel, AWEDeliveryTimeMsgModel;

@interface AWEDeliveryTimeMsgCell : AWEDeliveryBaseMsgCell

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) AWEDeliveryTimeMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;
+ (double)timeCellHeight;

- (void)didCustomInit;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
