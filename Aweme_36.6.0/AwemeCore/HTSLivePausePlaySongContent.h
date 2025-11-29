@class NSString;

@interface HTSLivePausePlaySongContent : IESLivePBBaseMessage

@property (readonly, copy, nonatomic) NSString *mixSingerId;
@property (nonatomic) long long songId;
@property (nonatomic) int actionType;
@property (nonatomic) long long fromUserId;
@property (nonatomic) long long singerId;
@property (copy, nonatomic) NSString *fromOpenId;
@property (copy, nonatomic) NSString *singerOpenId;

+ (id)descriptor;

@end
