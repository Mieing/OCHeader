@class NSString;

@interface AWESearchSearchSourceParamProvider : NSObject <AWESearchRequestParamsProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dependKeys;
+ (id)getParamsWithContext:(id)a0 dependKeys:(id)a1;
+ (id)provideKeys;
+ (BOOL)enableFixParamSearchSource;
+ (BOOL)enableFixParamCity;
+ (id)changeSearchSourceIfNeed:(id)a0 params:(id)a1;
+ (BOOL)enablePreserveExtraParam;


@end
