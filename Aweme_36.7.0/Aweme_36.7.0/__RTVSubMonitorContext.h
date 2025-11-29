@class NSDictionary, NSString;

@interface __RTVSubMonitorContext : NSObject <RTVSubMonitorContext>

@property (readonly, copy, nonatomic) NSDictionary *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;

@end
