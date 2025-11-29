@class NSString;

@interface AWEDataLayerFetchDataToken : NSObject

@property (copy, nonatomic) NSString *tokenId;
@property (nonatomic) long long currentState;
@property (copy) NSString *dependencyTokenId;

- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCancelled;
- (void)cancel;
- (BOOL)isFinished;
- (void)addDependency:(id)a0;

@end
