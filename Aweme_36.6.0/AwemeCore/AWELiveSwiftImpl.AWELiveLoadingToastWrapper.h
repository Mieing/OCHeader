@interface AWELiveSwiftImpl.AWELiveLoadingToastWrapper : NSObject <IESLiveLoadingToastProtocol> {
    void /* unknown type, empty encoding */ loadingToast;
}

- (void)showOnView:(id)a0 withCover:(BOOL)a1 withCenterPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)setDidCloseBlock:(id /* block */)a0;
- (void)hideAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithText:(id)a0;

@end
