@class NSString;

@interface MJSTTReportInfo : NSObject

@property (retain, nonatomic) NSString *voiceID;
@property (nonatomic) unsigned long long audioFormat;
@property (nonatomic) unsigned long long totalDataLength;
@property (nonatomic) unsigned long long sttTimeCost;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
