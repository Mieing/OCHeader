@class YYLabel, AWEECOMIMInteractiveSystemMsgModel;

@interface AWEECOMIMInteractiveSystemMsgCell : AWEECOMIMBaseMsgCell

@property (retain, nonatomic) YYLabel *tipLabel;
@property (retain, nonatomic) AWEECOMIMInteractiveSystemMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
