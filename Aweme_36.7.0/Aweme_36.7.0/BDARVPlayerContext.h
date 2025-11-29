@class BDARVSourceModel, BDARTrackerDataModel;

@interface BDARVPlayerContext : NSObject

@property (retain, nonatomic) BDARTrackerDataModel *trackerDataModel;
@property (nonatomic) BOOL enableReplay;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isPlayerPreload;
@property (nonatomic) BOOL isDataPreload;
@property (nonatomic) long long currentResolution;
@property (nonatomic) double inspirePlayTime;
@property (retain, nonatomic) BDARVSourceModel *source;
@property (nonatomic) BOOL hitCache;

- (void).cxx_destruct;

@end
