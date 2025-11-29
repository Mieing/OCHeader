@interface AWELivePreStreamInnerFeedServiceImpl : NSObject <IESLiveInnerFeedPrestreamService> {
    void /* unknown type, empty encoding */ prestreamVC;
}

- (void)deceleratingEndToDisplay;
- (void)setInnerFeedEnterCompletion:(id /* block */)a0;
- (void)willBeginDragging:(id)a0;
- (void)willEndDragging:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)createPrestreamVCWithReferString:(id)a0 completion:(id /* block */)a1;
- (void)configureWithFeedItem:(id)a0;
- (void)backEntrance;
- (void)removePrestreamVC;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (void)reset;
- (void)didEndDisplaying;

@end
