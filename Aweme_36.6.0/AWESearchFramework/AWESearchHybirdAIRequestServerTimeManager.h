@interface AWESearchHybirdAIRequestServerTimeManager : NSObject

@property (nonatomic) long long timeStamp;

+ (long long)getTimeStamp;
+ (long long)nowTimeStamp;
+ (void)updateTimeStamp;
+ (id)shareInstance;

@end
