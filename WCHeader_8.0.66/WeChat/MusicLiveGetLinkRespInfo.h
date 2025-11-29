@class NSString, MusicLiveGetLinkReqInfo;

@interface MusicLiveGetLinkRespInfo : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) MusicLiveGetLinkReqInfo *reqInfo;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int audioType;
@property (nonatomic) BOOL enableJoinMembership;
@property (retain, nonatomic) NSString *lyric;

+ (void)initialize;

@end
