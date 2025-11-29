@class NSString, NSNumber, AWEURLModel;

@interface AWESearchXiguaVideoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *videoTitle;
@property (retain, nonatomic) NSNumber *createTime;
@property (retain, nonatomic) NSNumber *playCount;
@property (readonly, nonatomic) NSNumber *duration;
@property (retain, nonatomic) AWEURLModel *coverURL;

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
