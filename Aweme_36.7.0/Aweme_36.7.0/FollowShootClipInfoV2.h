@interface FollowShootClipInfoV2 : GPBMessage

@property (nonatomic) long long clipVideoAll;
@property (nonatomic) BOOL hasClipVideoAll;
@property (nonatomic) long long clipFromPlatform;
@property (nonatomic) BOOL hasClipFromPlatform;
@property (nonatomic) long long clipFromUser;
@property (nonatomic) BOOL hasClipFromUser;
@property (nonatomic) long long originClipId;
@property (nonatomic) BOOL hasOriginClipId;

+ (id)descriptor;

- (long long)clipFromPlatform;
- (long long)clipFromUser;
- (long long)originClipId;
- (long long)clipVideoAll;

@end
