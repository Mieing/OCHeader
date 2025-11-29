@class NSMutableArray;

@interface AWERelatedPanelRegisterCenter : NSObject

@property (retain, nonatomic) NSMutableArray *strategyClassList;

+ (id)sharedInstance;

- (void)registerStrategyClass:(Class)a0;
- (long long)firstResponseClassType:(id)a0;
- (id)baseStrategy:(id)a0;
- (Class)firstResponseClass:(id)a0;
- (void)panelBeginTriggerRegister;
- (void).cxx_destruct;
- (id)init;

@end
