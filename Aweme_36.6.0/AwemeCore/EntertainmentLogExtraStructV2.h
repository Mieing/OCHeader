@class NSString;

@interface EntertainmentLogExtraStructV2 : GPBMessage

@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL hasLogExtra;
@property (copy, nonatomic) NSString *freeWatchFromChannels;
@property (nonatomic) BOOL hasFreeWatchFromChannels;

+ (id)descriptor;

- (id)logExtra;

@end
