@class NSString;

@interface BDUGPushMuteStatus : NSObject

@property (nonatomic) long long isMuted;
@property (copy, nonatomic) NSString *startTime;
@property (copy, nonatomic) NSString *endTime;

- (void)mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
