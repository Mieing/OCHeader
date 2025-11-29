@class NSString;

@interface IESIMUIAdditionsService : HTSService <IESIMUIAdditionsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableRTL;
- (void)setHitTestEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 ofButton:(id)a1;
- (void)setAlpha:(double)a0 ofButton:(id)a1 forState:(unsigned long long)a2;
- (void)scrollViewStopInfiniteScrollingAnimating:(id)a0;
- (void)scrollViewResetInfiniteScrollingOriginalContentSize:(id)a0;
- (void)scrollView:(id)a0 addInfiniteScrollingWithActionHandler:(id /* block */)a1;
- (void)tableViewAdaptIOS11:(id)a0;
- (double)availableScreenWidth;
- (double)availableScreenHeight;
- (void)setRTL_viewType:(unsigned long long)a0 forView:(id)a1;

@end
