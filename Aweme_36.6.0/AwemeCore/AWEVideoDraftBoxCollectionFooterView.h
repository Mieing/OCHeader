@class UIButton;
@protocol AWEVideoDraftBoxCollectionFooterViewDelegate;

@interface AWEVideoDraftBoxCollectionFooterView : UIView

@property (retain, nonatomic) UIButton *checkAllButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *footerFeedbackButton;
@property (retain, nonatomic) UIButton *saveLocalButton;
@property (weak, nonatomic) id<AWEVideoDraftBoxCollectionFooterViewDelegate> delegate;

- (void)feedbackAction;
- (id)p_getAWEColorWithColorName:(id)a0;
- (id)p_getACCColorWithColorName:(id)a0;
- (BOOL)p_isDarkTheme;
- (void)checkAllAction;
- (void)saveLocalAction;
- (void)updateWithSelectedCount:(long long)a0 totalCount:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)buttonTextColor;
- (void)deleteAction;
- (void)p_init;

@end
