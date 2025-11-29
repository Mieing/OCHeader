@interface AWEIMChatCellPreloadConfig : NSObject

@property (nonatomic) long long preloadBuffer;
@property (nonatomic) double offsetRequired;
@property (nonatomic) double currentOffset;

- (id)init;
- (void)reset;

@end
