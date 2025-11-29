@class NSString, WeNoteSourceInfo, WeNoteBusinessExtraData;

@interface WeNoteMataData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL editable;
@property (retain, nonatomic) WeNoteSourceInfo *sourceInfo;
@property (retain, nonatomic) WeNoteBusinessExtraData *extraData;

+ (void)initialize;

@end
