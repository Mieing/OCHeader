@class WeNoteGroupNoticeExtraData, WeNoteMsgExtraData;

@interface WeNoteBusinessExtraData : WXPBGeneratedMessage

@property (retain, nonatomic) WeNoteMsgExtraData *msgExtraData;
@property (retain, nonatomic) WeNoteGroupNoticeExtraData *groupNoticeExtraData;

+ (void)initialize;

@end
