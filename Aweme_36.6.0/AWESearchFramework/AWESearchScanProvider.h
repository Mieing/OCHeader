@class NSString;

@interface AWESearchScanProvider : NSObject

@property (copy, nonatomic) NSString *preSearchId;
@property (copy, nonatomic) NSString *currentSearchId;

+ (id)getContainerConfigWithScanType:(long long)a0;
+ (id)getUnarchiveClasses;
+ (id)sharedInstance;

- (void)cleanSearchId;
- (void).cxx_destruct;

@end
