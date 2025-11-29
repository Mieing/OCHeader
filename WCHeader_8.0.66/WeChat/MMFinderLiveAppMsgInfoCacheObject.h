@interface MMFinderLiveAppMsgInfoCacheObject : NSObject

@property (copy, nonatomic) id /* block */ processAppMsgBlock;

- (id)initWithProcessAppMsgBlock:(id /* block */)a0;
- (void)process;
- (void).cxx_destruct;

@end
