@interface WCFinderCollectionFeedCellConfig : NSObject

@property (nonatomic) BOOL isPlaying;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL forceCompleteCourseWatch;
@property (nonatomic) BOOL forceShowNeedPayTag;
@property (nonatomic) BOOL showWatchedAtLastTimeTips;
@property (nonatomic) double cellHorizontalPadding;

+ (id)configWithPlaying:(BOOL)a0 style:(unsigned long long)a1;

@end
