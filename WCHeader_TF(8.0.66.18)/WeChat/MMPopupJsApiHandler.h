@protocol MMPopupJsApiHandlerDelegate;

@interface MMPopupJsApiHandler : NSObject

@property (weak, nonatomic) id<MMPopupJsApiHandlerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)setupApiWithJSContext:(id)a0;
- (void)addApi_popup:(id)a0;
- (void)addApi_close:(id)a0;
- (void).cxx_destruct;

@end
