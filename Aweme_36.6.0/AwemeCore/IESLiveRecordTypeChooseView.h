@class UIImageView, UIImage, UILabel, UIView;

@interface IESLiveRecordTypeChooseView : UIView

@property (retain, nonatomic) UIView *backgroundMask;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *screenRecordBgView;
@property (retain, nonatomic) UIView *backRecordBgView;
@property (retain, nonatomic) UIImageView *screenRecordIcon;
@property (retain, nonatomic) UIImageView *backRecordIcon;
@property (retain, nonatomic) UILabel *screenRecordLabel;
@property (retain, nonatomic) UILabel *backRecordLabel;
@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) id /* block */ screenRecordActionBlock;
@property (copy, nonatomic) id /* block */ backRecordActionBlock;
@property (retain, nonatomic) UIImage *screenRecordImage;
@property (retain, nonatomic) UIImage *backRecordImage;

- (double)pannelHeight;
- (void)tapScreenRecord:(id)a0;
- (void)tapBackRecord:(id)a0;
- (void)hidePannel;
- (void)showPannelInView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;

@end
