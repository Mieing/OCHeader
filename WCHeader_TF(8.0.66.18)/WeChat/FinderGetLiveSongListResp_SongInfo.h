@class NSString, NSMutableArray;

@interface FinderGetLiveSongListResp_SongInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songName;
@property (nonatomic) unsigned long long heatValue;
@property (retain, nonatomic) NSMutableArray *requestMemberNames;
@property (nonatomic) unsigned int requestMemberCnt;
@property (nonatomic) unsigned int memberAudienceRequestCount;
@property (nonatomic) unsigned int auditStatus;

+ (void)initialize;

@end
