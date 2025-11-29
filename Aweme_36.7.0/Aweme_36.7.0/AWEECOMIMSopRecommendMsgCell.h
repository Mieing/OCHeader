@class YYLabel;

@interface AWEECOMIMSopRecommendMsgCell : AWEECOMIMBaseMsgCell

@property (retain, nonatomic) YYLabel *tipLabel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;
+ (struct CGSize { double x0; double x1; })textSizeWithModel:(id)a0;
+ (id)attributeContentWithModel:(id)a0;
+ (void)handleAction:(id)a0 model:(id)a1;

- (void)didCustomInit;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
