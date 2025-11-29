@class NSString, MMListenMentionFeed_JumpInfo_JumpLiteAppInfo;

@interface MMListenMentionFeed_JumpInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *playlistSongListenId;
@property (nonatomic) int jumpType;
@property (retain, nonatomic) MMListenMentionFeed_JumpInfo_JumpLiteAppInfo *headimgJumpInfo;
@property (retain, nonatomic) MMListenMentionFeed_JumpInfo_JumpLiteAppInfo *feedJumpInfo;

+ (void)initialize;

@end
