@class NSDictionary, NSMutableDictionary;
@protocol WebviewJSEventHandlerBaseDelegate;

@interface GameCenterJsApiFacade : MMObject {
    NSDictionary *_funcMap;
    NSMutableDictionary *_funcHandlerMap;
    id<WebviewJSEventHandlerBaseDelegate> m_delegate;
}

- (id)init;
- (void)initJsApi;
- (void)setDelegate:(id)a0;
- (BOOL)canHandle:(id)a0;
- (void)handle:(id)a0;
- (void).cxx_destruct;

@end
