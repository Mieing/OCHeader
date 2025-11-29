@class NSString, NSMutableDictionary;

@interface AWEIMActiveUserDataTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *trackDataDict;
@property (copy, nonatomic) NSString *trackEvent;

- (void)trackWithActiveUserInfo:(id)a0 uid:(id)a1 overwritingEntries:(id)a2;
- (void)trackWithActiveUserInfo:(id)a0 uid:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
