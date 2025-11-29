@class NSString;

@interface HTSLiveGameCPData : IESLivePBBaseMessage

@property (nonatomic) int isLiveAPromotedA;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (nonatomic) long long promoteInstanceId;

+ (id)descriptor;

@end
