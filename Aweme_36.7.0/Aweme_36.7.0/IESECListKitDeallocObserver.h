@interface IESECListKitDeallocObserver : NSObject

@property (copy, nonatomic) id /* block */ deallocCallback;

- (id)initWithDeallocCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
