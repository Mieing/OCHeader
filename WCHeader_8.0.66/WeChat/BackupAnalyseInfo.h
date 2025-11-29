@class NSString, NSMutableArray;

@interface BackupAnalyseInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned long long costTime;
@property (nonatomic) unsigned int sessionCount;
@property (retain, nonatomic) NSMutableArray *sessionList;
@property (nonatomic) unsigned long long msgCount;
@property (nonatomic) unsigned int mediaCount;
@property (nonatomic) unsigned long long mediaSize;
@property (retain, nonatomic) NSMutableArray *mediaTypeList;
@property (nonatomic) unsigned int filterMediaCount;
@property (nonatomic) unsigned long long filterMediaSize;
@property (retain, nonatomic) NSMutableArray *filterMediaTypeList;

+ (void)initialize;

@end
