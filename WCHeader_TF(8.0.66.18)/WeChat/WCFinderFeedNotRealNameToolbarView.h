@class UIColor, NSString;
@protocol WCFinderFeedNotRealNameToolbarViewDelegate;

@interface WCFinderFeedNotRealNameToolbarView : UIView <ILinkEventExt>

@property (retain, nonatomic) UIColor *tipsLabelColor;
@property (retain, nonatomic) UIColor *retryColor;
@property (weak, nonatomic) id<WCFinderFeedNotRealNameToolbarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)toolbarHeightWith:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tipsLabelColor:(id)a1 retryColor:(id)a2;
- (void)setUpUI;
- (void)clickCancelAction;
- (void)clickRetryAction;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
