@class AWEMusicPerformancePageModel, NSArray, AWEOriginalSoundTrackMediaPageModel;

@interface AWEOriginalSoundTrackListNewResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEMusicPerformancePageModel *performanceList;
@property (copy, nonatomic) NSArray *foldChartMediaList;
@property (retain, nonatomic) AWEOriginalSoundTrackMediaPageModel *foldMediaList;
@property (retain, nonatomic) AWEOriginalSoundTrackMediaPageModel *foldCooperationMediaList;
@property (nonatomic) BOOL hasMore;

+ (id)hasMoreJSONTransformer;
+ (id)performanceListJSONTransformer;
+ (id)foldChartMediaListJSONTransformer;
+ (id)foldMediaListJSONTransformer;
+ (id)foldCooperationMediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
