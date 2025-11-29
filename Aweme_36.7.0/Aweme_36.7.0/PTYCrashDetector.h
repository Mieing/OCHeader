@class NSString;

@interface PTYCrashDetector : NSObject <PTYCrashContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCrashCallBack;
+ (void)addTag:(id)a0 forKey:(id)a1;
+ (void)removeTagForKey:(id)a0;
+ (id)currentPage;
+ (void)setup:(id)a0;


@end
