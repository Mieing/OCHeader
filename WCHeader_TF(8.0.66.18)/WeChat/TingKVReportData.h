@class NSData;

@interface TingKVReportData : WXPBGeneratedMessage

@property (nonatomic) unsigned int logId;
@property (nonatomic) BOOL isReportNow;
@property (nonatomic) BOOL isImportant;
@property (nonatomic) BOOL ignoreFreqLimit;
@property (retain, nonatomic) NSData *reportContentBuffer;

+ (void)initialize;

@end
