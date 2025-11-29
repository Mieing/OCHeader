@class NSArray;
@protocol BDStrategyUpdateProtocol;

@interface BDStrategyProviderManager : NSObject

@property (copy, nonatomic) NSArray *providers;
@property (weak, nonatomic) id<BDStrategyUpdateProtocol> delegate;

- (void)addNotification;
- (void)removeNotification;
- (void)listenStrategyUpdate;
- (void)fetchStrategyAndPreprocess;
- (id)fetchStrategy;
- (void)registerStrategyProvider:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
