@class NSNumber, HTSLiveUser;

@interface HTSLiveTopFan : IESLivePBBaseMessage

@property (retain, nonatomic) NSNumber *rank;
@property (nonatomic) long long fanTicket;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;

+ (id)descriptor;

@end
