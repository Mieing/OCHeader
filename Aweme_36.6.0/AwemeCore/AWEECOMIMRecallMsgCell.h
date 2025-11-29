@class YYLabel, AWEECOMIMRecallMessageModel;

@interface AWEECOMIMRecallMsgCell : AWEECOMIMBaseMsgCell

@property (retain, nonatomic) YYLabel *tipsLabel;
@property (retain, nonatomic) AWEECOMIMRecallMessageModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (void)updateRecallCell;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
