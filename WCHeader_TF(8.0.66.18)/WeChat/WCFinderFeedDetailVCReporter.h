@class NSString;

@interface WCFinderFeedDetailVCReporter : NSObject

@property (copy, nonatomic) NSString *originExtraInfo;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *traceID;

- (void)setupWithFeedID:(id)a0 commentScene:(int)a1;
- (void)startupReportInfo;
- (void)endReportInfo;
- (void).cxx_destruct;

@end
