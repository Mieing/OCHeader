@class NSString, UIButton, UILabel;

@interface WCPayCardNumberScanForeView : UIView {
    UIButton *infoBtn;
    UILabel *nameLabel;
    UILabel *tipsLabel;
}

@property (copy, nonatomic) NSString *username;
@property (weak, nonatomic) id target;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 target:(id)a1 username:(id)a2;
- (void)dealloc;
- (void)commonInit;
- (void)adjustToNewSize;
- (void).cxx_destruct;

@end
