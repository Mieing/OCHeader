@class NSString;

@interface AWESearchLastGroupIDManager : NSObject

@property (retain, nonatomic) NSString *lastGroupID;

+ (id)sharedInstance;

- (void)updateLastGroupID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
