@class NSString, UIImageView, ShelfCardInfo, UILabel, UIView, UIButton;

@interface IESLiveNativeAppExplainCardView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *cardContentView;
@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) UIImageView *explainCardIdentifier;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *confrimButton;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) ShelfCardInfo *cardInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadShelfInfo:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
