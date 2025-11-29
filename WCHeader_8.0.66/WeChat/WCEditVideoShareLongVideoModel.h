@interface WCEditVideoShareLongVideoModel : NSObject

@property (nonatomic) unsigned long long entrance;
@property (nonatomic) BOOL hasMiaoJianEntrance;
@property (nonatomic) BOOL hasWeSeeEntrance;
@property (nonatomic) BOOL hasFinderEntranceForLongVideo;
@property (nonatomic) BOOL hasFinderEntranceForShortVideo;
@property (nonatomic) long long minDurationFinderRequiredForShortVideo;

- (id)initWithEntrance:(unsigned long long)a0;
- (void)loadDynamicConfig;
- (BOOL)canShowLongVideoShareOptions;
- (BOOL)noShareOptions;
- (BOOL)isTimelineEntrance;
- (void)showShareActionSheetInView:(id)a0;
- (void)sendWithMiaoJian:(id)a0 callback:(id /* block */)a1;
- (id)description;

@end
