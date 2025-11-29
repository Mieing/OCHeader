@interface AWESearchFPSBlockUtil : NSObject

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) double blockTime;
@property (readonly, nonatomic) long long cardGap;

- (void)p_setPerfBlock;
- (id)init;
- (void)block;

@end
