@class NSString, AWENewHotSearchModel, AWEVideoInfoModel, AWEURLModel;

@interface AWEEventNodeModel : AWEBaseApiModel

@property (nonatomic) long long nodeID;
@property (nonatomic) long long nodeType;
@property (nonatomic) unsigned long long label;
@property (copy, nonatomic) NSString *eventTime;
@property (copy, nonatomic) NSString *nodeDesc;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) AWENewHotSearchModel *hotInfoModel;
@property (retain, nonatomic) AWEVideoInfoModel *videoInfoModel;

+ (id)coverURLJSONTransformer;
+ (id)hotInfoModelJSONTransformer;
+ (id)videoInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
