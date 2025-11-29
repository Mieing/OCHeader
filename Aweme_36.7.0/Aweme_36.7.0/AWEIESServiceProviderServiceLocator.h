@class NSString;
@protocol IESServiceProvider;

@interface AWEIESServiceProviderServiceLocator : NSObject <AWEGenericServiceLocator>

@property (retain, nonatomic) id<IESServiceProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
