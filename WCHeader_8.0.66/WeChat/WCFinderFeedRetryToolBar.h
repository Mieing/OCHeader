@protocol WCFinderFeedRetryToolBarDelegate;

@interface WCFinderFeedRetryToolBar : UIView

@property (weak, nonatomic) id<WCFinderFeedRetryToolBarDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 errorTips:(id)a1 buttonOptionFlag:(unsigned long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 errorTips:(id)a1 errorReason:(id)a2 buttonOptionFlag:(unsigned long long)a3 errorTipsLabelColor:(id)a4;
- (void)clickCancelAction;
- (void)clickRetryAction;
- (void).cxx_destruct;

@end
