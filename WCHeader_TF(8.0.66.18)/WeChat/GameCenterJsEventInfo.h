@class NSString, NSDictionary, WebviewJSEventHandler_gameCenterFacade, JSEvent;

@interface GameCenterJsEventInfo : NSObject

@property (retain, nonatomic) NSString *methodName;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) JSEvent *jsEvent;
@property (weak, nonatomic) WebviewJSEventHandler_gameCenterFacade *eventHandler;

- (void)successWithMessage:(id)a0;
- (void)failWithMessage:(id)a0;
- (void)completeWithMessage:(id)a0 success:(BOOL)a1;
- (void)completeWithMessage:(id)a0 success:(BOOL)a1 dict:(id)a2;
- (void)failWithError:(id)a0;
- (id)getResultDictWithMessage:(id)a0 success:(BOOL)a1 dict:(id)a2;
- (void).cxx_destruct;

@end
