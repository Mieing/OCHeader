@class NSString, NSData;

@interface WCFinderLiveAcceptMicReportParams : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long connectTimestampInMS;
@property (retain, nonatomic) NSData *liveCookies;

- (id)paramDescription;
- (void).cxx_destruct;

@end
