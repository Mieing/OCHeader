@class NSArray;

@interface AWERouterAdapter : NSObject

@property (class, copy, nonatomic) NSArray *allowURLStrings;
@property (class, nonatomic) BOOL schemeTransformedValidateEnable;

+ (id)validateURLString:(id)a0;
+ (void)markDidRegisterWithURLString:(id)a0;
+ (void)registerRouterSchemesBeforeTransferWithURLString:(id)a0;
+ (void)hookCanOpenURLString;
+ (void)hookCanRetriveViewController;
+ (void)hookViewControllerForURLString;
+ (struct objc_method { } *)AWERouterClassMethodWithSEL:(SEL)a0;
+ (void)setup;

@end
