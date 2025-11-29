@class NSString;

@interface CGRTCRoomStats : NSObject

@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long totalDuration;
@property (nonatomic) long long txBytes;
@property (nonatomic) long long rxBytes;
@property (nonatomic) long long txKbitrate;
@property (nonatomic) long long rxKbitrate;
@property (nonatomic) long long txAudioKbitrate;
@property (nonatomic) long long rxAudioKbitrate;
@property (nonatomic) long long txVideoKbitrate;
@property (nonatomic) long long rxVideoKbitrate;
@property (nonatomic) long long txScreenKbitrate;
@property (nonatomic) long long rxScreenKbitrate;
@property (nonatomic) double txLostrate;
@property (nonatomic) double rxLostrate;
@property (nonatomic) long long rtt;
@property (nonatomic) long long txJitter;
@property (nonatomic) long long rxJitter;
@property (nonatomic) long long txCellularKbitrate;
@property (nonatomic) long long rxCellularKbitrate;

- (void).cxx_destruct;

@end
