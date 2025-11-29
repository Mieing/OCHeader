@class HTSLiveEmojiMaterial, HTSLivePicoVirtualLiveConfig, NSMutableArray, GPBInt64ObjectDictionary;

@interface HTSLiveLikeIconInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *iconsArray;
@property (readonly, nonatomic) unsigned long long iconsArray_Count;
@property (retain, nonatomic) NSMutableArray *emojisArray;
@property (readonly, nonatomic) unsigned long long emojisArray_Count;
@property (retain, nonatomic) HTSLiveEmojiMaterial *entryEmoji;
@property (nonatomic) BOOL hasEntryEmoji;
@property (retain, nonatomic) HTSLivePicoVirtualLiveConfig *picoVirtualLiveConfig;
@property (nonatomic) BOOL hasPicoVirtualLiveConfig;
@property (retain, nonatomic) GPBInt64ObjectDictionary *componentRelatedIcons;
@property (readonly, nonatomic) unsigned long long componentRelatedIcons_Count;

+ (id)descriptor;

@end
