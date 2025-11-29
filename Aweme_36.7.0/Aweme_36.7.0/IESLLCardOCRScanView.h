@class UIImageView, NSString;

@interface IESLLCardOCRScanView : UIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *leftTopImageView;
@property (retain, nonatomic) UIImageView *rightTopImageView;
@property (retain, nonatomic) UIImageView *rightBottomImageView;
@property (retain, nonatomic) UIImageView *leftBottomImageView;
@property (nonatomic) double rotationAngle;
@property (copy, nonatomic) NSString *bgUrl;

- (void)p_setupData;
- (id)initWithAngle:(double)a0 bgUrl:(id)a1;
- (void)showCornersView:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
