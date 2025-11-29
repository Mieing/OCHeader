@class NSString;

@interface WCFinderLivePlayStatusReportStruct : NSObject

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int reportTime;
@property (nonatomic) unsigned int playStatus;
@property (nonatomic) unsigned int playTime;
@property (nonatomic) unsigned int liveScene;
@property (retain, nonatomic) NSString *streamId;
@property (retain, nonatomic) NSString *anchorNickname;
@property (retain, nonatomic) NSString *playUrl;

- (id)toReport;
- (void).cxx_destruct;

@end
