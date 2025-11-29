@class NSNumber, NSString;

@interface GameWebViewClientReportRecord : MMObject

@property (nonatomic) BOOL reportOnExit;
@property (retain, nonatomic) NSNumber *logId;
@property (retain, nonatomic) NSString *reportStr;
@property (retain, nonatomic) NSString *timePlaceHolderKey;
@property (retain, nonatomic) NSNumber *reportDuration;
@property (nonatomic) unsigned long long startTimeStamp;
@property (nonatomic) BOOL isReportNow;
@property (nonatomic) BOOL isImportant;
@property (nonatomic) BOOL isTimeMillSecond;

- (void)reportLog;
- (void)reportLogByOtherPageDurationSec:(double)a0;
- (id)replaceStr:(id)a0 occurrenceOfString:(id)a1 withString:(id)a2;
- (void).cxx_destruct;

@end
