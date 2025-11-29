@class NSString, NSMutableDictionary;

@interface CJPayParamsCacheManager : NSObject <CJPayParamsCacheService>

@property (retain, nonatomic) NSMutableDictionary *paramsCacheDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

@end
