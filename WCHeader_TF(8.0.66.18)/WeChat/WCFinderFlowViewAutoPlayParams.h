@interface WCFinderFlowViewAutoPlayParams : NSObject

@property (copy, nonatomic) id /* block */ visibleRectProvider;
@property (copy, nonatomic) id /* block */ playableCellsFilterBlock;
@property (copy, nonatomic) id /* block */ preventChangePlayableBlock;
@property (nonatomic) unsigned long long maxPlayCount;

+ (id /* block */)defaultAutoPlayVisibleRectProvider;
+ (id)defaultParams;
+ (id)paramsForFollowFlowScene;

- (void).cxx_destruct;

@end
