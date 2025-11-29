@class NSData;

@interface FinderLiveSyncExtraInfoResponse_SyncResp : WXPBGeneratedMessage

@property (nonatomic) unsigned int cmdId;
@property (nonatomic) unsigned int ret;
@property (retain, nonatomic) NSData *respBuffer;
@property (nonatomic) unsigned int requestIntervalSec;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL disable;

+ (void)initialize;

@end
