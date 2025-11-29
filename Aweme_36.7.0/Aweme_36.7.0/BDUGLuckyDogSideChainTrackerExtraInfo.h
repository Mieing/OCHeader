@class NSString;

@interface BDUGLuckyDogSideChainTrackerExtraInfo : NSObject

@property (nonatomic) long long repeatCount;
@property (nonatomic) long long startTimeInMS;
@property (nonatomic) long long endTimeInMS;
@property (nonatomic) BOOL isActivated;
@property (retain, nonatomic) NSString *status;

- (void)updateEndTimeInMS;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
