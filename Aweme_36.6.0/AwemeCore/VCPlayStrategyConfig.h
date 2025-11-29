@class NSString;

@interface VCPlayStrategyConfig : NSObject <IVCPlayStrategyInterface>

@property (copy, nonatomic) NSString *traceId;
@property (nonatomic) void *managerPtr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configIntOptionToStrategy:(long long)a0 value:(long long)a1;
- (void)configFloatOptionToStrategy:(long long)a0 value:(float)a1;
- (void)configStringOptionToStrategy:(long long)a0 value:(id)a1;
- (void)configDictOptionToStrategy:(long long)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
