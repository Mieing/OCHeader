@class MusicLiveMvRecommendQuery, MusicLiveBgmRecommendQuery, NSString;

@interface MusicLiveRecommendQuery : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MusicLiveBgmRecommendQuery *bgmquery;
@property (retain, nonatomic) MusicLiveMvRecommendQuery *mvquery;
@property (retain, nonatomic) NSString *songinfobufferbase64;

+ (void)initialize;

@end
