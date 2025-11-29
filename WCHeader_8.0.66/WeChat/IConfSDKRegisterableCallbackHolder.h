@interface IConfSDKRegisterableCallbackHolder : NSObject

@property (copy) id /* block */ callback;
@property (nonatomic) BOOL isContinuous;

- (id)initWithCallback:(id /* block */)a0 isContinuous:(BOOL)a1;
- (void).cxx_destruct;

@end
