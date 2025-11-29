@class UILabel, AWEECOMIMTimeMsgModel;

@interface AWEECOMIMTimeMsgCell : AWEECOMIMBaseMsgCell

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) AWEECOMIMTimeMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;
+ (double)timeCellHeight;

- (void)didCustomInit;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
