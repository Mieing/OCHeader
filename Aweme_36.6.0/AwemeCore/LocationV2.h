@class Address;

@interface LocationV2 : IESLivePBBaseMessage

@property (retain, nonatomic) Address *gps;
@property (nonatomic) BOOL hasGps;
@property (retain, nonatomic) Address *ip;
@property (nonatomic) BOOL hasIp;
@property (retain, nonatomic) Address *loc;
@property (nonatomic) BOOL hasLoc;

+ (id)descriptor;

@end
