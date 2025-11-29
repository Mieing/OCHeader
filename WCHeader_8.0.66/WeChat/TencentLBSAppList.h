@class NSString, NSDate;

@interface TencentLBSAppList : NSObject

@property (copy, nonatomic) NSString *docPath;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSDate *last;

+ (id)sharedInstance;

- (id)init;
- (void)postAppList;
- (void).cxx_destruct;

@end
