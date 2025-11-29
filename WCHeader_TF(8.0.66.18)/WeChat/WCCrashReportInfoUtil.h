@class NSDictionary, NSMutableArray;

@interface WCCrashReportInfoUtil : NSObject

@property (retain, nonatomic) NSMutableArray *binaryImages;
@property (retain, nonatomic) NSDictionary *systemInfo;

+ (id)sharedInstance;

- (id)init;
- (void)setupSystemInfo;
- (void)setupBinaryImages;
- (id)getBinaryImages;
- (id)getSystemInfo;
- (void).cxx_destruct;

@end
