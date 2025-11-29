@class NSString;

@interface IESLiveInteractiveRTCInfoParams : NSObject

@property (copy, nonatomic) NSString *linkerID;
@property (copy, nonatomic) NSString *linkmicID;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (nonatomic) unsigned long long mixType;

- (void).cxx_destruct;
- (id)init;

@end
