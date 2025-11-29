@class NSString;

@interface FinderSyncLiveLogoResp_Logo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) BOOL isClearDisplay;

+ (void)initialize;

@end
