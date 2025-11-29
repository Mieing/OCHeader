@class NSMutableArray;

@interface IESLiveAccessNode : NSObject

@property (nonatomic) double originY;
@property (nonatomic) double originX;
@property (weak, nonatomic) id realObj;
@property (retain, nonatomic) NSMutableArray *subNodes;

- (id)currentLevelElements;
- (void)insertSubNode:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
