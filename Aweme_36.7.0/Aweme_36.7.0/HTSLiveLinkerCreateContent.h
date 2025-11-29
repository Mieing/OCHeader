@class NSString;

@interface HTSLiveLinkerCreateContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *ownerId;
@property (nonatomic) long long ownerRoomId;
@property (nonatomic) long long linkType;

+ (id)descriptor;

@end
