@class AWEListenFeedContext, AWEMixVideoModel, AWEAwemeModel, NSMutableArray, AWEListenFeedPlayModel;

@interface AWEListenFeedInteractionViewModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (retain, nonatomic) NSMutableArray *extendModelArray;
@property (retain, nonatomic) AWEListenFeedPlayModel *playModel;
@property (retain, nonatomic) AWEListenFeedContext *context;

+ (BOOL)vipVideoAllowedListenCached;

- (BOOL)isExtendStyle;
- (long long)currentMaxEpisode;
- (BOOL)checkModelCanPlay:(id)a0;
- (BOOL)isMixInfoMocked;
- (void).cxx_destruct;
- (void)reset;
- (long long)currentEpisode;

@end
