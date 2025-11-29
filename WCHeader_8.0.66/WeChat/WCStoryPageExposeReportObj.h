@class NSString;

@interface WCStoryPageExposeReportObj : NSObject

@property (nonatomic) unsigned long long pageType;
@property (retain, nonatomic) NSString *tid;

+ (void)ReportExposeWithPageType:(unsigned long long)a0;
+ (void)ReportBubbleCommentListExposeWithTid:(id)a0;

- (void)reportExpose;
- (void).cxx_destruct;

@end
