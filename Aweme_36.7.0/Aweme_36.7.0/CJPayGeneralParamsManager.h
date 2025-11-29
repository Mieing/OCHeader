@class NSString;

@interface CJPayGeneralParamsManager : NSObject <CJPayGeneralParamsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)i_getGeneralParamsWithQuery:(id)a0 delegate:(id)a1;
- (void)p_getLatestParams:(id)a0 delegate:(id)a1;

@end
