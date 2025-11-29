@class NSString, NSTimer, AWEShowAnnieXPageTrackInfo, AWEAwemeModel, NSDictionary;

@interface AWEShowAnnieXPageClickShowTrackUtil : NSObject

@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) AWEShowAnnieXPageTrackInfo *trackInfo;
@property (retain, nonatomic) NSTimer *loadTimeoutTimer;
@property (copy, nonatomic) id /* block */ loadTimeOutEvent;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void)releaseTimeoutTimer;
- (void)recordWillLoadTime;
- (void)recordLoadEndTime;
- (double)getLoadDuration;
- (void).cxx_destruct;
- (id)initWithContainerID:(id)a0;
- (void)createTimeoutTimer;

@end
