@class NSString, NSMutableArray;

@interface AWEUserWorkReachHelper : NSObject

@property (copy, nonatomic) NSString *cleanedReachKey;
@property (retain, nonatomic) NSMutableArray *cleanedReachArray;
@property (copy, nonatomic) NSString *reachItemID;

+ (id)sharedInstance;

- (id)cleanedReachs;
- (void)clearCleanedReachs;
- (void)cacheCleanedReachWithItemID:(id)a0;
- (void).cxx_destruct;

@end
