@protocol PrivateCommonApiHandlerDelegate;

@interface PrivateCommonApiHandler : NSObject

@property (weak, nonatomic) id<PrivateCommonApiHandlerDelegate> delegate;

- (void)handleCommonApiWithParams:(id)a0;
- (void).cxx_destruct;

@end
