@class NSString;
@protocol AWEPzStrategyConfigProtocol;

@interface AWEPlayInteractionComponentGlobalPriorityStrategy : NSObject <AWEPzStrategyProtocol, AWEPzSelectStrategyProtocol>

@property (retain, nonatomic) id<AWEPzStrategyConfigProtocol> config;
@property (nonatomic) long long maxComponentNum;
@property (nonatomic) long long componentAvoidPriorityThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectComponents:(id)a0;
- (void)setupConfig:(id)a0;
- (id)executePriority;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithConfig:(id)a0;

@end
