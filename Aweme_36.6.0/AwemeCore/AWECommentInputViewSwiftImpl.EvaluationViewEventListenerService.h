@interface AWECommentInputViewSwiftImpl.EvaluationViewEventListenerService : NSObject <AWECommentEvaluationEventListenerProtocol> {
    void /* function */ sendElementEvent;
    void /* function */ titleElementEvent;
    void /* function */ ratingElementEvent;
    void /* function */ contentElementEvent;
    void /* function */ previewElementEvent;
    void /* function */ pageEvent;
    void /* function */ expansionEvent;
}

@property (nonatomic, copy) id /* block */ sendElementEvent;
@property (nonatomic, copy) id /* block */ titleElementEvent;
@property (nonatomic, copy) id /* block */ ratingElementEvent;
@property (nonatomic, copy) id /* block */ contentElementEvent;
@property (nonatomic, copy) id /* block */ previewElementEvent;
@property (nonatomic, copy) id /* block */ pageEvent;
@property (nonatomic, copy) id /* block */ expansionEvent;

- (void).cxx_destruct;
- (id)init;

@end
