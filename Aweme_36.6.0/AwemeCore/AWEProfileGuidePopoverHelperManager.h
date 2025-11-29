@class NSMutableArray;

@interface AWEProfileGuidePopoverHelperManager : NSObject

@property (retain, nonatomic) NSMutableArray *helperArray;

+ (id)sharedInstance;

- (BOOL)containsPopoverHelper:(id)a0;
- (void)addPopoverHelper:(id)a0;
- (void)removePopoverHelper:(id)a0;
- (void).cxx_destruct;

@end
