@class AWEMusicModel, NSNumber, ACCMusicMetaStruct;

@interface ACCMusicChartMusicModel : ACCBaseApiModel

@property (retain, nonatomic) AWEMusicModel *musicInfo;
@property (retain, nonatomic) NSNumber *heat;
@property (nonatomic) BOOL canBackgroundPlay;
@property (nonatomic) BOOL hasCopyRight;
@property (retain, nonatomic) NSNumber *rank;
@property (retain, nonatomic) ACCMusicMetaStruct *chartMusicMeta;

+ (id)chartMusicMetaJSONTransformer;
+ (id)musicInfoJSONTransformer;
+ (id)canBackgroundPlayJSONTransformer;
+ (id)hasCopyRightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
