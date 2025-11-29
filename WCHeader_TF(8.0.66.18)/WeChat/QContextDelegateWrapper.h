@protocol QMapContextDelegate;

@interface QContextDelegateWrapper : NSObject

@property (weak, nonatomic) id<QMapContextDelegate> delegate;

- (void).cxx_destruct;

@end
