@class NSString;

@interface BDCastStatusInfo : NSObject

@property (nonatomic) long long currentTime;
@property (nonatomic) long long duration;
@property (nonatomic) unsigned long long playStatus;
@property (readonly, nonatomic) NSString *playStatusDes;

@end
