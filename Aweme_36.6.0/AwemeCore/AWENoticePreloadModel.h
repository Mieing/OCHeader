@class NSNumber;

@interface AWENoticePreloadModel : IESIMBaseApiModel

@property (retain, nonatomic) NSNumber *postTime;
@property (retain, nonatomic) NSNumber *commentTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
