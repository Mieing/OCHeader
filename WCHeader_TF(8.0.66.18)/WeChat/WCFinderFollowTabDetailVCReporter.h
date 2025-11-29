@class NSString;

@interface WCFinderFollowTabDetailVCReporter : NSObject

@property (copy, nonatomic) NSString *originExtraInfo;
@property (copy, nonatomic) NSString *firstFeedId;
@property (copy, nonatomic) NSString *firstTraceId;
@property (nonatomic) int commentScene;

- (void)setupFirstFeedID:(id)a0;
- (void)startupReportInfo;
- (void)endReportInfo;
- (void).cxx_destruct;

@end
