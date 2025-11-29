@interface CGPHeartBeat : GPBMessage

@property (nonatomic) BOOL client;
@property (nonatomic) long long ts;

+ (id)descriptor;

@end
