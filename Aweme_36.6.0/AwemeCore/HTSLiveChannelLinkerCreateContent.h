@class NSString;

@interface HTSLiveChannelLinkerCreateContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *ownerId;
@property (nonatomic) long long roomId;
@property (nonatomic) long long linkType;
@property (copy, nonatomic) NSString *secOwnerId;

+ (id)descriptor;

@end
