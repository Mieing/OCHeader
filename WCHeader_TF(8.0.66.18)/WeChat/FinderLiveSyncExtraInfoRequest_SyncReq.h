@class NSData;

@interface FinderLiveSyncExtraInfoRequest_SyncReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSData *reqBuffer;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
