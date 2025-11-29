@class NSString;

@interface ShareListResponse_ResponseUserData : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *secureUserId;
@property (nonatomic) int relationType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) int textType;
@property (nonatomic) double score;

+ (id)descriptor;

@end
