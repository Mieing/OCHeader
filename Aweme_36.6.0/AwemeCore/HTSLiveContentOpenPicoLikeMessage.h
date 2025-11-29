@class HTSLiveUser, NSString, HTSLiveCommon, HTSLiveEmojiMaterial;

@interface HTSLiveContentOpenPicoLikeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *emoji;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveEmojiMaterial *emojiMaterial;
@property (nonatomic) BOOL hasEmojiMaterial;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *totalCountDesc;

+ (id)descriptor;

@end
