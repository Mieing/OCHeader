@interface AWEFormatLiveFeedController : AWEFormatImpl.BaseComponentController <AWEFormatLiveOuterRoomTransitionProtocol, AWEFormatLiveFeedViewControllerProtocol> {
    void /* unknown type, empty encoding */ aweModel;
    void /* unknown type, empty encoding */ isEnterInner;
    void /* unknown type, empty encoding */ hasPaused;
}

- (void)updateModelWithModel:(id)a0;
- (void)vcWillDisplay;
- (void)vcEndDisplay;
- (void)vcPrepareForDisplay;
- (void)preloadWithModel:(id)a0;
- (void)play;
- (void)pause;
- (void)reset;
- (void)enterInnerRoom;
- (void)willLeaveInnerRoomWithForce:(BOOL)a0 reason:(id)a1 needRemoveFeed:(BOOL)a2;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
