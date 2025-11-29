@class NSString;

@interface RTVDUXLoadingToast : DUXLoadingToast <RTVDUXLoadingToastProtocol>

@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

- (void)close;
- (void).cxx_destruct;

@end
