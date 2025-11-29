@interface IESMMARResultCallbackRegister : NSObject

@property (class, nonatomic, getter=isPreferredUsingBuildinAR) BOOL preferredUsingBuildinAR;

+ (void)registerSupportedCallbacks;
+ (void)registerCallbacks;

@end
