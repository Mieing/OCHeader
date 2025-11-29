@interface WCAdPreloadCountConfigInfo : NSObject

@property (readonly, nonatomic) unsigned int preloadPageCount;
@property (readonly, nonatomic) unsigned int preloadResourceCount;

- (id)initWithConfig:(id)a0 shareFeed:(BOOL)a1;
- (void)parseConfig:(id)a0;

@end
