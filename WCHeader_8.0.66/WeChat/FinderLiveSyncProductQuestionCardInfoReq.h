@class NSString;

@interface FinderLiveSyncProductQuestionCardInfoReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long lastMinSeq;
@property (nonatomic) unsigned long long isFirstReq;
@property (nonatomic) unsigned long long limitNum;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL ignoreStatus;
@property (retain, nonatomic) NSString *lastBuf;

+ (void)initialize;

@end
