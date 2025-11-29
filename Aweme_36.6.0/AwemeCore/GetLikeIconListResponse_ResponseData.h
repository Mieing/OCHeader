@class HTSLiveEmojiMaterial, NSMutableArray;

@interface GetLikeIconListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *iconsArray;
@property (readonly, nonatomic) unsigned long long iconsArray_Count;
@property (retain, nonatomic) NSMutableArray *emojisArray;
@property (readonly, nonatomic) unsigned long long emojisArray_Count;
@property (retain, nonatomic) HTSLiveEmojiMaterial *entryEmoji;
@property (nonatomic) BOOL hasEntryEmoji;

+ (id)descriptor;

@end
