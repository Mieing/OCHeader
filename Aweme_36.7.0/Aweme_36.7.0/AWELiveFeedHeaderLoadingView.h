@class NSString, AWEUILoadingView;

@interface AWELiveFeedHeaderLoadingView : UIView <IESLiveRefreshView>

@property (retain, nonatomic) AWEUILoadingView *loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupLoading;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)changeToState:(unsigned long long)a0;
- (void)setRetryAction:(id /* block */)a0;

@end
