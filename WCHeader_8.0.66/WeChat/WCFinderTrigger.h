@class NSString, DiscoverExposeEdgeArgs, CalendarStatisticsArgs;

@interface WCFinderTrigger : MMObject <IExptServiceExt, IEdgeComputingDataSourceExt> {
    DiscoverExposeEdgeArgs *edgeArgs;
    CalendarStatisticsArgs *finderCalendarArgs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onSendKV:(id)a0 withReportID:(unsigned int)a1;
- (void)enterFindFriendEntryController:(id)a0 andStayTimeMs:(unsigned long long)a1;
- (void)quitFindFriendEntryController:(id)a0 andNext:(id)a1 andStayTimeMs:(unsigned long long)a2;
- (id)checkToReturnAiFinderInfo;
- (void)finder19943:(id)a0;
- (void).cxx_destruct;

@end
