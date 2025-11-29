@class NSString, AWEURLModel;

@interface AWEVisionSearchObjectModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *objectID;
@property (nonatomic) long long objectType;
@property (retain, nonatomic) AWEURLModel *urlModel;
@property (copy, nonatomic) NSString *queryID;
@property (copy, nonatomic) NSString *displayTitle;
@property (nonatomic) BOOL order;

+ (id)urlModelJSONTransformer;
+ (id)rectPositionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
