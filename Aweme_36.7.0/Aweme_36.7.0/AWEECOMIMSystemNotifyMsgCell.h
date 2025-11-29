@class AWEECOMIMSystemNotifyMsgModel, UIImageView, UILabel, UIView, YYLabel;

@interface AWEECOMIMSystemNotifyMsgCell : AWEECOMIMBaseMsgCell

@property (retain, nonatomic) UIImageView *bgContainerView;
@property (retain, nonatomic) UILabel *themeLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) AWEECOMIMSystemNotifyMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (void)buttonClickAction:(id)a0;
- (void)_cusotmLayoutSubviews;
- (id)createImageWithMaskLayerColors:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
