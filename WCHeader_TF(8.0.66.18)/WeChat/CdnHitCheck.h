@class CdnBase, CdnChatting, CdnFileId;

@interface CdnHitCheck : WXPBGeneratedMessage

@property (retain, nonatomic) CdnBase *base;
@property (nonatomic) int filetype;
@property (retain, nonatomic) CdnFileId *fileid;
@property (retain, nonatomic) CdnChatting *chat;

+ (void)initialize;

@end
