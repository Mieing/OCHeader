@class NSString;

@interface FinderJumpLiveNecessaryParams : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveid;
@property (nonatomic) unsigned long long nonceid;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSString *bypReportChnlExtra;

+ (void)initialize;

@end
