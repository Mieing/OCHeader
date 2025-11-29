@class NSString;

@interface HTSLiveLinkMicAudienceKtvMessage_SongUniqueInfo : IESLivePBBaseMessage

@property (nonatomic) long long songId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long songType;
@property (nonatomic) BOOL isPublic;
@property (nonatomic) long long kSongUid;

+ (id)descriptor;

@end
