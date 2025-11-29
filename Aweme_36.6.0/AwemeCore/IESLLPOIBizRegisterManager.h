@class NSMutableArray;

@interface IESLLPOIBizRegisterManager : NSObject

@property (retain, nonatomic) NSMutableArray *providers;

+ (id)sharedManager;

- (void)registerExtensionWithBiz:(id)a0 extensionManager:(id)a1 pageContext:(id)a2;
- (void)setupCommonExtensionsWithManager:(id)a0;
- (void)updateBizCode:(id)a0 extensionManager:(id)a1 pageContext:(id)a2;
- (id)commonProvider;
- (id)commonAndBizProvider:(id)a0;
- (id)performanceProviderForBiz:(id)a0;
- (void).cxx_destruct;
- (void)registerProvider:(id)a0;
- (id)init;

@end
