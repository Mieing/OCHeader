@class NSArray, NSString;

@interface AWEVideoPlayDanmakuGetResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *danmakuList;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long statuscode;
@property (nonatomic) long long total;
@property (copy, nonatomic) NSString *statusmsg;

+ (id)danmakuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
