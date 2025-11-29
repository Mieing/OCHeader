@class NSString;

@interface HTSLiveLinkerSetting : IESLivePBBaseMessage

@property (nonatomic) long long maxMemberLimit;
@property (nonatomic) long long linkType;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *ownerUserId;
@property (nonatomic) long long ownerRoomId;
@property (nonatomic) long long vendor;

+ (id)descriptor;

@end
