@class NSString, NSDictionary;

@interface QBaseReportEvent : NSObject

@property (copy, nonatomic) NSString *eventCode;
@property (retain, nonatomic) NSDictionary *params;

- (void).cxx_destruct;

@end
