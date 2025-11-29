@interface RTVXRRoomClockCorrectSettings : JSONModel

@property (nonatomic) long long bestNetworkDelay;
@property (nonatomic) long long badNetworkDelay;
@property (nonatomic) long long handCountOneRound;
@property (nonatomic) long long intervalNextTime;
@property (nonatomic) long long intervalNextRound;
@property (nonatomic) long long durationHandTimeout;
@property (nonatomic) BOOL enable;

+ (id)keyMapper;
+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

@end
