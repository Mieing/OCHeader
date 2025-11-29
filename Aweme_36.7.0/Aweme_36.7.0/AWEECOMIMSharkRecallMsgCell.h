@class AWEECOMIMSharkRecallMsgModel;

@interface AWEECOMIMSharkRecallMsgCell : AWEECOMIMBaseUserMsgCell

@property (retain, nonatomic) AWEECOMIMSharkRecallMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)setCellModel:(id)a0;
- (void)layoutSubviews;

@end
