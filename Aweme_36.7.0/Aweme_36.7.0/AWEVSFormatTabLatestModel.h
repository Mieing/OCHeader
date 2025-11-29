@class NSString;

@interface AWEVSFormatTabLatestModel : NSObject

@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *currentPeriod;
@property (copy, nonatomic) NSString *watchedPeriodText;
@property (nonatomic) double watchDuration;
@property (nonatomic) double watchRatio;
@property (copy, nonatomic) NSString *seasonID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *vsEpisodeType;
@property (copy, nonatomic) NSString *vsEpisodeSubType;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) unsigned long long directionType;

- (void).cxx_destruct;

@end
