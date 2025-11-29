@class NSMutableArray, NSMutableDictionary;

@interface BDSCLoadInjectionManager : NSObject

@property (retain, nonatomic) NSMutableArray *hasRegisterModules;
@property (retain, nonatomic) NSMutableDictionary *handlers;

+ (id)sharedManager;

- (void)evaluateModule:(id)a0;
- (void)loadSectionIfNeeded;
- (void)p_loadSection;
- (void).cxx_destruct;

@end
