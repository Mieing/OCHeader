@class AWEECOMIMDynamicCardElementHelper;

@interface BDPCDDynamicCardProtocolRegisterService : NSObject

@property (class, retain, nonatomic) AWEECOMIMDynamicCardElementHelper *elementHelper;

@property (retain) Class commonFunctionClass;

+ (void)registerProtocolWithClass:(Class)a0;
+ (id)commonFunctionInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
