@class UIFont, NSString, UILabel, UIView;

@interface WCPayNavigationView : UIView

@property (nonatomic) unsigned long long m_pushedDirection;
@property (retain, nonatomic) UIView *my_cancelButton;
@property (retain, nonatomic) UILabel *my_titleLabel;
@property (retain, nonatomic) UILabel *my_subtitleLabel;
@property (retain, nonatomic) NSString *my_title;
@property (retain, nonatomic) NSString *my_subtitle;
@property (retain) UIFont *titleFont;
@property (readonly, nonatomic) BOOL m_showing;
@property (readonly, nonatomic) double m_navigationOffsetY;

+ (void)baseView:(id)a0 pushView:(id)a1 animated:(BOOL)a2 direction:(unsigned long long)a3 completeHandler:(id /* block */)a4;
+ (void)baseView:(id)a0 popView:(id)a1 animated:(BOOL)a2 direction:(unsigned long long)a3 completeHandler:(id /* block */)a4;
+ (void)baseView:(id)a0 pushView:(id)a1;
+ (void)baseView:(id)a0 presentView:(id)a1;

- (id)init;
- (void)updateShowing:(BOOL)a0;
- (void)updateTitle:(id)a0;
- (void)updateTitleFont:(id)a0;
- (void)updateSubtitle:(id)a0;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)layoutSubviews;
- (void)updateSubView;
- (void)updateCancelButton;
- (id)cancelButtonViewWithPushDirection:(unsigned long long)a0;
- (void)updateTitleLabel;
- (void)updateSubtitleLabel;
- (void)adjustTitleLabel;
- (void)pushView:(id)a0 animated:(BOOL)a1 direction:(unsigned long long)a2 completeHandler:(id /* block */)a3;
- (void)popView:(id)a0 animated:(BOOL)a1 direction:(unsigned long long)a2 completeHandler:(id /* block */)a3;
- (void)presentView:(id)a0;
- (void)presentView:(id)a0 completeHandler:(id /* block */)a1;
- (void)pushView:(id)a0;
- (void)pushView:(id)a0 completeHandler:(id /* block */)a1;
- (void)popView:(id)a0;
- (void)popView:(id)a0 CompleteHandler:(id /* block */)a1;
- (void)dismissMyself;
- (void)dismissMyselfWithCompleteHandler:(id /* block */)a0;
- (void)popAll;
- (void)popAllWithCompleteHandler:(id /* block */)a0;
- (void)popToRoot;
- (void)popToRootWithCompleteHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
