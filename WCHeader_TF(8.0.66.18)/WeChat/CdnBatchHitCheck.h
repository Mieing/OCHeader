@class CdnBase, NSMutableArray, CdnChatting;

@interface CdnBatchHitCheck : WXPBGeneratedMessage

@property (retain, nonatomic) CdnBase *base;
@property (nonatomic) int filetype;
@property (retain, nonatomic) NSMutableArray *fileids;
@property (retain, nonatomic) CdnChatting *chat;

+ (void)initialize;

@end
