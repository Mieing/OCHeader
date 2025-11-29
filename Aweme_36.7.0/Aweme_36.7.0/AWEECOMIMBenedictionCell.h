@class UIImageView, AWEECOMIMBenedictionMsgModel;

@interface AWEECOMIMBenedictionCell : AWEECOMIMBaseMsgCell

@property (retain, nonatomic) UIImageView *benedictionImage;
@property (retain, nonatomic) AWEECOMIMBenedictionMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (id)otherDisplayTrackParams;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
