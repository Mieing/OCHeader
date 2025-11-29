@class NSString, HMDThreadSafeDictionary;

@interface HMDServerStateManager : NSObject

@property (retain, nonatomic) HMDThreadSafeDictionary *hmdServerCheckers;
@property (copy, nonatomic) NSString *defaultAppID;

+ (id)shared;

- (void)getAppID;
- (id)getServerChecker:(unsigned long long)a0 forApp:(id)a1;
- (id)getServerChecker:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
