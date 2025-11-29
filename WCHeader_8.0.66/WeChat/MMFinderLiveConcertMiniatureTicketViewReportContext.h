@class NSString, WCFinderDataItem;

@interface MMFinderLiveConcertMiniatureTicketViewReportContext : NSObject

@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSString *commentScene;

- (id)initWithActivityId:(id)a0 commentScene:(id)a1 finderDataItem:(id)a2;
- (void)reportGetTicketButtonExposure;
- (void)reportCloseButtonExposure;
- (void)reportGetTicketButtonInvocation;
- (void)reportCloseButtonInvocation;
- (id)liveId;
- (void).cxx_destruct;

@end
