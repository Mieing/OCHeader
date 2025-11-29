@interface IESLiveInnerFeedStore : NSObject

@property (copy, nonatomic) id /* block */ scrollEnableBlock;
@property (nonatomic) BOOL scrollEnabled;

- (void)updateEnableScroll:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
