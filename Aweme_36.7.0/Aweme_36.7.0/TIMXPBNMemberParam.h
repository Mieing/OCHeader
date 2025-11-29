@interface TIMXPBNMemberParam : GPBMessage

@property (nonatomic) int useNewMemberSync;
@property (nonatomic) BOOL hasUseNewMemberSync;
@property (nonatomic) long long localMemberVersion;
@property (nonatomic) BOOL hasLocalMemberVersion;

+ (id)descriptor;

@end
