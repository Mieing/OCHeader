@class NSDictionary, NSMutableDictionary;
@protocol WebviewJSEventHandlerBaseDelegate;

@interface WebviewJSEventHandlerFacade : NSObject {
    NSMutableDictionary *m_functionHandlers;
    NSMutableDictionary *m_functionCallExtraDataMap;
    NSDictionary *m_functionMap;
}

@property (weak, nonatomic) id<WebviewJSEventHandlerBaseDelegate> m_delegate;

- (id)init;
- (void)handleJSEvent:(id)a0;
- (id)getExtraDataForEvent:(id)a0;
- (void)setExtraData:(id)a0 forEvent:(id)a1;
- (id)getExistedHandlerForFunction:(id)a0;
- (id)handlerForFunction:(id)a0;
- (BOOL)canHandleJSEvent:(id)a0;
- (id)extraDataForNextJSEventCalled:(id)a0;
- (void)setJSFunctionMap:(id)a0;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void).cxx_destruct;

@end
