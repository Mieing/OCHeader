@class NSDictionary, NSMutableArray, NSMutableSet;

@interface HMDWPDynamicProtect : NSObject

@property (retain, nonatomic) NSMutableArray *waitFlags;
@property (retain, nonatomic) NSMutableSet *swizzledMethodSet;
@property (copy) NSDictionary *protectedMethodDictionary;

+ (id)validatedMethodNameString:(id)a0 error:(id *)a1;
+ (id)sharedInstance;

- (void)protectMethodsOnMainThread:(id)a0 onAnyThread:(id)a1;
- (id)protectMethods:(id)a0;
- (id)blockWithClass:(Class)a0 selector:(SEL)a1 isInstance:(BOOL)a2 signature:(const char *)a3 methodName:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
