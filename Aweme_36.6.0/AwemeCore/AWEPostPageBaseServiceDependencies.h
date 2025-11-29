@class NSString;
@protocol IESServiceProvider;

@interface AWEPostPageBaseServiceDependencies : NSObject <ACCServiceBindable>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
