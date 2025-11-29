@class NSString, NSMutableArray;

@interface BackupAnalyseSession : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionName;
@property (nonatomic) unsigned long long msgCount;
@property (nonatomic) unsigned int mediaCount;
@property (nonatomic) unsigned long long mediaSize;
@property (retain, nonatomic) NSMutableArray *mediaTypeList;
@property (nonatomic) unsigned int filterMediaCount;
@property (nonatomic) unsigned long long filterMediaSize;
@property (retain, nonatomic) NSMutableArray *filterMediaTypeList;

+ (void)initialize;

@end
