@class NSString;

@interface EdgeComputingCacheStrategyBase : NSObject <IEdgeComputingCacheStrategyProtocol>

@property (nonatomic) unsigned int type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(unsigned int)a0;
- (void)reset;
- (void)close;
- (void)save:(id)a0;
- (void)remove:(id)a0;
- (void)clear;
- (void)deleteExpire:(unsigned long long)a0;
- (void)migrate;
- (id)query:(id)a0;
- (unsigned long long)count;

@end
