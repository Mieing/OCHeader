@class NSString;
@protocol CJPayAPIDelegate;

@interface CJAuthVerifyManager : NSObject <CJPayAuthService>

@property (weak, nonatomic) id<CJPayAPIDelegate> apiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

@end
