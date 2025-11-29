@class NSMutableArray;

@interface BDPAppPreloadHistory : NSObject

@property (retain, nonatomic) NSMutableArray *lastPreloadList;
@property (nonatomic) long long maxPreloadCount;

+ (id)sharedInstance;

- (BOOL)addLastPreloadSchema:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)preload;

@end
