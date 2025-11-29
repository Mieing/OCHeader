@class NSString, UrlStructV2;

@interface SeriesPlayerStructV2 : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (retain, nonatomic) UrlStructV2 *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) BOOL hasJumpSchema;
@property (nonatomic) long long actorId;
@property (nonatomic) BOOL hasActorId;
@property (copy, nonatomic) NSString *actorIdStr;
@property (nonatomic) BOOL hasActorIdStr;
@property (copy, nonatomic) NSString *openUserId;
@property (nonatomic) BOOL hasOpenUserId;

+ (id)descriptor;

@end
