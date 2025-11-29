@interface BRSPlayerIdHelper : NSObject

@property (nonatomic) long long currentId;

+ (id)sharedInstance;

- (id)init;
- (long long)nextUniqueId;
- (void)resetIdCounter;

@end
