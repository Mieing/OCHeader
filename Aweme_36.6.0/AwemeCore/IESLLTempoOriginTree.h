@class NSString, NSArray, NSDictionary;

@interface IESLLTempoOriginTree : NSObject

@property (copy, nonatomic) NSString *rootNodeID;
@property (retain, nonatomic) NSArray *nodes;
@property (retain, nonatomic) NSDictionary *css;
@property (retain, nonatomic) NSDictionary *nodeMap;
@property (retain, nonatomic) NSDictionary *defaultProps;
@property (retain, nonatomic) NSDictionary *defaultData;
@property (retain, nonatomic) NSDictionary *animationKeyframes;

+ (id)originTreeWithUITemplate:(id)a0 treeType:(id)a1;

- (void)parseAnimationKeyframes;
- (void)parseNodeMapWithTreeType:(id)a0;
- (void).cxx_destruct;

@end
