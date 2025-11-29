@class NSString, TingPlayListInfo;

@interface TingRecentRecordGetPlayListInfoResult : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *msg;
@property (retain, nonatomic) TingPlayListInfo *info;

+ (void)initialize;

@end
