@class NSMutableDictionary;

@interface IESLiveExecutionModuleRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *modules;

- (void)registerModule:(id)a0 withName:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
