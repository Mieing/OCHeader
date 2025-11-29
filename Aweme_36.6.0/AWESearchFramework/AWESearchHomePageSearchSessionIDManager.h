@class NSString;

@interface AWESearchHomePageSearchSessionIDManager : NSObject

@property (copy, nonatomic) NSString *searchSessionID;

+ (id)sharedInstance;

- (void)updataSearchSessionID;
- (void).cxx_destruct;
- (id)init;

@end
