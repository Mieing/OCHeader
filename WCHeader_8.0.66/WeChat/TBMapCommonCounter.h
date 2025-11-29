@interface TBMapCommonCounter : NSObject

@property (nonatomic) int mapCount;

- (id)init;
- (void)increase;
- (int)getAndReset;

@end
