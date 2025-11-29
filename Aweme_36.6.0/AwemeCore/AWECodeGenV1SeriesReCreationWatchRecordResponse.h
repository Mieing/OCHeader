@class NSString;

@interface AWECodeGenV1SeriesReCreationWatchRecordResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSString *seriesId;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) long long episode;
@property (nonatomic) long long watchedProgress;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
