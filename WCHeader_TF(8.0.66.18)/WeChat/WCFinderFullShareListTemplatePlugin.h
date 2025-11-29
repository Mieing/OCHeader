@class NSString, WCFinderJSAPIFeedListBehavior, WCFInderJSAPIFeedReadReporter;

@interface WCFinderFullShareListTemplatePlugin : NSObject

@property (retain, nonatomic) WCFinderJSAPIFeedListBehavior *behavior;
@property (retain, nonatomic) WCFInderJSAPIFeedReadReporter *readReporter;
@property (retain, nonatomic) NSString *lastReportFocusTid;

- (id)initWithBehavior:(id)a0;
- (void)notifyFocusFeedChange:(id)a0;
- (void)notifyDeletedFeed:(id)a0;
- (void)notifyNegativeFeedback:(id)a0;
- (id)readReporterWithoutCreate;
- (void)onShareListViewClose;
- (void).cxx_destruct;

@end
