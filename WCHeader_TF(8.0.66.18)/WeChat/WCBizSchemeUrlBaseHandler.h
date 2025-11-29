@protocol WCBizSchemeUrlBaseHandlerDelegate;

@interface WCBizSchemeUrlBaseHandler : NSObject

@property (weak, nonatomic) id<WCBizSchemeUrlBaseHandlerDelegate> delegate;

- (void)startHandleWithActionBuffer:(id)a0 transBuffer:(id)a1 andTransBufferSign:(id)a2;
- (BOOL)needCustomizeWhenToDismissBlocingViewController;
- (BOOL)targetLoginStatusIsLogin;
- (void).cxx_destruct;

@end
