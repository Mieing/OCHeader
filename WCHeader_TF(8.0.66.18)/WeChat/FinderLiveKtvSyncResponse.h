@class NSMutableArray, BaseResponse;

@interface FinderLiveKtvSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int firstSongVersion;
@property (nonatomic) unsigned int nextSyncInterval;
@property (retain, nonatomic) NSMutableArray *songInfoList;

+ (void)initialize;

@end
