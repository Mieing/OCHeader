@class CdnChatting, CdnBigfileParams, CdnFileId;

@interface CdnFileIdDownload : WXPBGeneratedMessage

@property (retain, nonatomic) CdnFileId *fileid;
@property (retain, nonatomic) CdnChatting *chat;
@property (retain, nonatomic) CdnBigfileParams *bigfile;

+ (void)initialize;

@end
