@interface HTSLiveEpisodeMod : IESLivePBBaseMessage

@property (nonatomic) int episodeStage;
@property (nonatomic) int episodeType;
@property (nonatomic) int episodeSubType;
@property (nonatomic) int episodeRecordType;

+ (id)descriptor;

- (int)episodeStage;

@end
