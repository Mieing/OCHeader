@class NSNumber, NSDate;

@interface VeCoreDateManager : NSObject

@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSNumber *mediaTime;

+ (id)sharedInstance;

- (id)getCurrentServerDate;
- (void)recordServerTime:(id)a0;
- (void).cxx_destruct;

@end
