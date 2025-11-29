@class UIImageView, UILabel, UIView, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate;

@interface IESLiveNativeAppShelfCellCoverImageView : UIImageView

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIView *coverShadowView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIView *coverHighLightView;
@property (retain, nonatomic) UIImageView *explainingTipImageView;
@property (retain, nonatomic) UILabel *explainingTipLabel;
@property (nonatomic) BOOL isShowProductPic;
@property (weak, nonatomic) id<UIGestureRecognizerDelegate> tapGestureDelegate;
@property (copy, nonatomic) id /* block */ tapAction;

- (id)initWithDIContent:(id)a0 trackContext:(id)a1;
- (id)getProductTraceParams;
- (void)setTapGestureDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
