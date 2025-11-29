@interface EcsShareToContactEventCallback : NSObject

@property (copy, nonatomic) id /* block */ onSuc;
@property (copy, nonatomic) id /* block */ onCancel;
@property (copy, nonatomic) id /* block */ onFail;

- (void).cxx_destruct;

@end
