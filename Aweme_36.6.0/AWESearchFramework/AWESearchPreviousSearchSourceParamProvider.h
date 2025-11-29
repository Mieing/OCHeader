@class NSString;

@interface AWESearchPreviousSearchSourceParamProvider : NSObject <AWESearchRequestParamsProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dependKeys;
+ (id)getParamsWithContext:(id)a0 dependKeys:(id)a1;
+ (id)provideKeys;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)enableHomePagePrerequest;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;

@end
