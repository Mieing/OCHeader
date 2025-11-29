@class IESECUIImageView;

@interface IESECGoodsDetailMiniPreview : UIView

@property (retain, nonatomic) IESECUIImageView *coverImgView;
@property (retain, nonatomic) IESECUIImageView *mainPreview;
@property (retain, nonatomic) IESECUIImageView *bottomPreview;

- (void)updateWithCover:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
