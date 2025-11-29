@class NSString;

@interface AWECodeGenEpisodeHighlightModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long startTimeMillis;
@property (nonatomic) long long endTimeMillis;
@property (nonatomic) long long highlightEpisodeId;
@property (nonatomic) long long highlightItemId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
