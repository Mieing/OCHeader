@protocol TXLiveBaseAdapterDelegete;

@interface TXLiveBaseAdapterDelegateWrapper : NSObject

@property (weak, nonatomic) id<TXLiveBaseAdapterDelegete> delegate;
@property (nonatomic) long long businessType;

- (void).cxx_destruct;

@end
