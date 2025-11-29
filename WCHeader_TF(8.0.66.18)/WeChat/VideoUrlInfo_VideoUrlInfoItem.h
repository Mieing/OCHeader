@class NSString, ContentId, VideoCdnInfo;

@interface VideoUrlInfo_VideoUrlInfoItem : WXPBGeneratedMessage

@property (retain, nonatomic) ContentId *contentId;
@property (nonatomic) BOOL valid;
@property (retain, nonatomic) VideoCdnInfo *videoCdnInfo;
@property (retain, nonatomic) NSString *videoApi;
@property (nonatomic) unsigned int videoApiExpireTime;

+ (void)initialize;

@end
