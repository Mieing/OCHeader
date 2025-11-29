@class NSString;

@interface HTSLivePaidLiveBaseInfo : IESLivePBBaseMessage

@property (nonatomic) int paidLiveType;
@property (nonatomic) long long ticketSessionId;
@property (nonatomic) long long ticketPrice;
@property (nonatomic) int viewRight;
@property (nonatomic) int delivery;
@property (copy, nonatomic) NSString *ticketSessionIdStr;

+ (id)descriptor;

@end
