@class NSString, NSMutableDictionary;

@interface IESliveAudienceInteractPanelTrackParams : NSObject

@property (nonatomic) double createStartTime;
@property (nonatomic) double createEndTime;
@property (copy, nonatomic) NSString *finalReportURL;
@property (retain, nonatomic) NSMutableDictionary *urlToFetchStartTime;
@property (retain, nonatomic) NSMutableDictionary *urlToFetchFinishTime;
@property (retain, nonatomic) NSMutableDictionary *urlToRenderStartTime;
@property (retain, nonatomic) NSMutableDictionary *urlToRenderFinishTime;
@property (nonatomic) double renderStartTime;
@property (nonatomic) double renderEndTime;
@property (nonatomic) double fetchListStartTime;
@property (nonatomic) double fetchListEndTime;
@property (nonatomic) double handleStartTime;
@property (nonatomic) double handleEndTime;
@property (nonatomic) double minStartTime;
@property (nonatomic) double maxEndTime;

- (void).cxx_destruct;
- (id)init;

@end
