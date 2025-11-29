@class NSString;
@protocol IEdgeComputingCacheStrategyProtocol;

@interface EdgeComputingDataCacheBase : NSObject <IEdgeComputingDataCacheProtocol>

@property (retain, nonatomic) id<IEdgeComputingCacheStrategyProtocol> cacheStrategy;
@property (nonatomic) unsigned int storageMode;
@property (nonatomic) unsigned int type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reset;
- (void)close;
- (void)save:(id)a0;
- (id)read:(id)a0;
- (void)clear:(id)a0;
- (void)deleteExpire:(unsigned long long)a0;
- (unsigned long long)count;
- (void)migrate;
- (void).cxx_destruct;

@end
