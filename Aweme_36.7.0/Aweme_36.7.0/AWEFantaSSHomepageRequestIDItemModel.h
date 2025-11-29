@class NSString, NSMutableArray;

@interface AWEFantaSSHomepageRequestIDItemModel : AWEBaseApiModel

@property (nonatomic) long long requestTime;
@property (copy, nonatomic) NSString *reqID;
@property (nonatomic) long long reqNum;
@property (retain, nonatomic) NSMutableArray *docList;

+ (id)docListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
