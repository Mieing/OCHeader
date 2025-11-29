@class NSString, NSDate;
@protocol PosterSRLoggerDelegate;

@interface PosterSRLogger : NSObject

@property (copy, nonatomic) id /* block */ fabricLogBlock;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL getAWECommand;
@property (nonatomic) BOOL logEnable;
@property (retain, nonatomic) NSString *sign;
@property (weak, nonatomic) id<PosterSRLoggerDelegate> loggerDelegate;
@property (nonatomic) int logLevel;

+ (id)sharedInstance;

- (void)loggerMessage:(id)a0 andLevel:(int)a1;
- (void).cxx_destruct;
- (id)init;

@end
