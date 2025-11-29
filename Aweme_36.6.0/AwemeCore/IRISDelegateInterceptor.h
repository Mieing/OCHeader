@interface IRISDelegateInterceptor : NSObject

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) id /* block */ onInterceptionBefore;
@property (copy, nonatomic) id /* block */ onInterceptionAfter;

- (void).cxx_destruct;

@end
