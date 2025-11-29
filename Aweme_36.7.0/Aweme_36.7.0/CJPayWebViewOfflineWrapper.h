@class NSString;

@interface CJPayWebViewOfflineWrapper : NSObject <CJPayOfflineService>

@property (copy, nonatomic) NSString *appId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)shared;

@end
