@class NSString;

@interface WACameraScanViewControllerProxy : NSObject <IWACameraScanViewControllerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateViewControllerWithCodeParam:(id)a0;
+ (long long)codeTypeForCodeTypeStrList:(id)a0;
+ (id)generateViewControllerWithItemParam:(id)a0;


@end
