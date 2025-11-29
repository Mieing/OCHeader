@class BDPUniqueID, NSString, UILabel, UIView, UIButton;

@interface BDPWarningToastView : UIView

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UIView *bgViwe;
@property (retain, nonatomic) UIView *toastViwe;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSString *pageCode;
@property (copy, nonatomic) id /* block */ completion;

- (void)closeBtnOnClicked;
- (id)initWithTitle:(id)a0 content:(id)a1 uniqueID:(id)a2 pageCode:(id)a3;
- (void)showInView:(id)a0 withDuration:(double)a1;
- (void).cxx_destruct;
- (void)createUI;

@end
