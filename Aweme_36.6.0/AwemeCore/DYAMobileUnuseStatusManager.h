@class NSMutableDictionary;

@interface DYAMobileUnuseStatusManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *status;

+ (id)sharedInstance;

- (BOOL)getStatusForPhoneNumber:(id)a0 type:(long long)a1 scene:(long long)a2;
- (void)setStatusForPhoneNumber:(id)a0 type:(long long)a1 scene:(long long)a2;
- (void)clearStatusForPhoneNumber:(id)a0 type:(long long)a1 scene:(long long)a2;
- (void).cxx_destruct;

@end
