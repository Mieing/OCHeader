@class NSString, NSDictionary;

@interface WCFinderFeedFlowViewReportParams : NSObject

@property (copy, nonatomic) NSString *pageTag;
@property (copy, nonatomic) NSString *groudId;
@property (nonatomic) unsigned long long musicType;
@property (copy, nonatomic) NSString *eventId;
@property (nonatomic) unsigned long long eventSortType;
@property (retain, nonatomic) NSDictionary *eventInfo;
@property (retain, nonatomic) NSDictionary *udfKV;
@property (nonatomic) unsigned long long markReadScene;
@property (nonatomic) unsigned long long markReadSubScene;
@property (nonatomic) unsigned long long cellExposeReportRate;
@property (nonatomic) BOOL forbidReport;
@property (retain, nonatomic) NSDictionary *liveChnlExtra;

- (void).cxx_destruct;

@end
