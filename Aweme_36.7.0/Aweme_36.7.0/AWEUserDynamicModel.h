@class NSArray, NSNumber, AWEAwemeModel;

@interface AWEUserDynamicModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSArray *commentList;
@property (copy, nonatomic) NSArray *likeList;
@property (copy, nonatomic) NSArray *itemIDList;
@property (retain, nonatomic) NSNumber *likeCount;
@property (retain, nonatomic) NSNumber *dynamicTime;

+ (id)awemeJSONTransformer;
+ (id)commentListJSONTransformer;
+ (id)likeListJSONTransformer;
+ (id)userDynamicCellTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
