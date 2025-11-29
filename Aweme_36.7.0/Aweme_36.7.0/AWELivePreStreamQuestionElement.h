@interface AWELivePreStreamQuestionElement : AWELiveTopElement <AWELivePreStreamMessageSubscriber> {
    void /* unknown type, empty encoding */ cardView;
    void /* unknown type, empty encoding */ destructionTimer;
    void /* unknown type, empty encoding */ initialData;
}

+ (BOOL)shouldActivateElement;

- (void)initializeElement;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
