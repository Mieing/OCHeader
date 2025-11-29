@class NSString, AWERectPosition, AWEURLModel;

@interface AWEVisionSearchObjectModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *objectID;
@property (nonatomic) long long objectType;
@property (retain, nonatomic) AWEURLModel *urlModel;
@property (retain, nonatomic) AWERectPosition *rectPosition;
@property (nonatomic) BOOL isCurrentFrame;
@property (copy, nonatomic) NSString *queryID;
@property (copy, nonatomic) NSString *displayTitle;
@property (nonatomic) BOOL pointViewTracked;
@property (nonatomic) BOOL buttonShownTracked;
@property (nonatomic) BOOL order;

+ (id)urlModelJSONTransformer;
+ (id)rectPositionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
