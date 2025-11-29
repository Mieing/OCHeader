@class WCFinderMemberShipZoneHeaderData, NSMutableDictionary, WCFinderLiveAudienceNoticeReporter, NSMutableSet, WCFinderMemberShipZoneViewModel;

@interface WCFinderMemberShipZoneReporter : NSObject

@property (nonatomic) int scene;
@property (retain, nonatomic) NSMutableSet *reportedElements;
@property (retain, nonatomic) NSMutableDictionary *elementReportAction;
@property (nonatomic) BOOL stopReport;
@property (weak, nonatomic) WCFinderMemberShipZoneViewModel *viewModel;
@property (retain, nonatomic) WCFinderMemberShipZoneHeaderData *headData;
@property (retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveReporter;

- (id)initWithCommentScene:(int)a0;
- (void)initDefaultData;
- (void)initElementReportActions;
- (void)recardElement:(unsigned int)a0 expose:(BOOL)a1;
- (void)cleanAll;
- (void)exposeElementAgain;
- (void).cxx_destruct;

@end
