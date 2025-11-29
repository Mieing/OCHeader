@class BDPTTCode;

@interface BDPTTCodeGenerator : NSObject {
    BOOL _generatingTTCode;
    long long _failedTimes;
}

@property (retain, nonatomic) BDPTTCode *ttcode;
@property (readonly, nonatomic) BDPTTCode *sharedTTcode;

+ (id)sharedInstance;

- (void)preCreateTTCodeIfNeed;
- (id)getSharedTTCode;
- (void).cxx_destruct;

@end
