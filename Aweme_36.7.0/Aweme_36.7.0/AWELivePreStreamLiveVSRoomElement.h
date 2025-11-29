@class NSString;

@interface AWELivePreStreamLiveVSRoomElement : AWELiveBaseElement <AWELivePreStreamMessageSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)streamPlayer_firstFrame;
- (void)iesLiveTrackEvent:(id)a0 params:(id)a1;
- (void)configureMessage;
- (void)trackerContentPlay;
- (void)setData:(id)a0;
- (void)reset;

@end
