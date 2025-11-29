@class IESLiveKtvSongStruct;

@interface HTSLiveLinkMicAudienceKtvMessage_ListInfo : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvSongStruct *music;
@property (nonatomic) BOOL hasMusic;
@property (nonatomic) BOOL isSelfSeeing;

+ (id)descriptor;

@end
