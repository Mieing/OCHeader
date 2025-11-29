@class NSString;

@interface WebviewPageJumpReportInfo : NSObject

@property (retain, nonatomic) NSString *pageUrl;
@property (nonatomic) unsigned long long enterTimestamp;
@property (nonatomic) unsigned long long pageStayTime;
@property (retain, nonatomic) NSString *pageTitle;

- (id)description;
- (void).cxx_destruct;

@end
