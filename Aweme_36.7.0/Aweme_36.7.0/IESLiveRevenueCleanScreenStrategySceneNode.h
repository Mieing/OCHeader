@class NSString;

@interface IESLiveRevenueCleanScreenStrategySceneNode : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long level;
@property (readonly, nonatomic) long long clearType;

+ (id)sceneNodeWithKey:(id)a0 level:(long long)a1;

- (void).cxx_destruct;
- (id)description;

@end
