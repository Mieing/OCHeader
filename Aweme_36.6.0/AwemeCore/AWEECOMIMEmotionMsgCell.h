@class AWEECOMIMEmotionMsgModel, UIImageView, UILabel, AWEECOMIMIndicatorView, BDImageView;

@interface AWEECOMIMEmotionMsgCell : AWEECOMIMBaseUserMsgCell

@property (retain, nonatomic) BDImageView *emoticonView;
@property (retain, nonatomic) AWEECOMIMIndicatorView *loadingView;
@property (retain, nonatomic) UIImageView *failImageView;
@property (retain, nonatomic) UILabel *failLabel;
@property (retain, nonatomic) AWEECOMIMEmotionMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;
+ (struct CGSize { double x0; double x1; })emoticonSizeWithModel:(id)a0;

- (void)didCustomInit;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onTap;

@end
