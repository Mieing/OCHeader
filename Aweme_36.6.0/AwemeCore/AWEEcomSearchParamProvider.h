@class NSString;

@interface AWEEcomSearchParamProvider : NSObject <AWEEcomSearchParamProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramsWithContext:(id)a0 dependKeys:(id)a1;
+ (id)dependKeys;
+ (id)getParamsWithContext:(id)a0 dependKeys:(id)a1;
+ (id)provideKeys;


@end
