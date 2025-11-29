@class WCFinderDataItem, NSString;

@interface MMFinderLiveConcertTicketViewControllerReportingContext : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSString *commentScene;
@property (retain, nonatomic) NSString *activityId;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) unsigned long long enterTimestamp;

- (id)initWithActivityId:(id)a0 commentScene:(id)a1 enterScene:(unsigned long long)a2 finderDataItem:(id)a3;
- (void)reportEntering;
- (void)reportLeaving;
- (void)reportShareButtonExposureWithResourceId:(id)a0 contentType:(unsigned long long)a1;
- (void)reportAlternativeShareButtonExposureWithResourceId:(id)a0 contentType:(unsigned long long)a1;
- (void)reportNextStyleButtonExposureWithResourceId:(id)a0;
- (void)reportSaveImageButtonExposureWithResourceId:(id)a0;
- (void)reportExternalNavigationExposureWithResourceId:(id)a0;
- (void)reportShareButtonInvocationWithResourceId:(id)a0 contentType:(unsigned long long)a1;
- (void)reportAlternativeShareButtonInvocationWithResourceId:(id)a0 contentType:(unsigned long long)a1;
- (void)reportNextStyleButtonInvocationWithResourceId:(id)a0;
- (void)reportSaveImageButtonInvocationWithResourceId:(id)a0;
- (void)reportExternalNavigationInvocationWithResourceId:(id)a0;
- (void)reportShareToChatSucceeded:(id)a0 isRecentForward:(BOOL)a1 resourceId:(id)a2 contentType:(unsigned long long)a3;
- (void)reportShareToMomentsSucceededWithResourceId:(id)a0 contentType:(unsigned long long)a1;
- (void)reportWithActionType:(unsigned long long)a0 commentScene:(id)a1 elementId:(id)a2 eidUdfKv:(id)a3;
- (void).cxx_destruct;

@end
