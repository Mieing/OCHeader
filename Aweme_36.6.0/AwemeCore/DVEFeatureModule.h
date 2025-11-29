@class NSString;
@protocol IESServiceProvider;

@interface DVEFeatureModule : NSObject <DVEFeatureModule>

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
