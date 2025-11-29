@class NSString;

@interface CSJAdSDKTestToolManager : NSObject

@property (copy, nonatomic) NSString *testTimeStamp;
@property (copy, nonatomic) NSString *hostIP;
@property (copy, nonatomic) NSString *hostPort;

+ (BOOL)isUnionBundleId;
+ (void)setHostIP:(id)a0;
+ (void)setTestLongitude:(id)a0;
+ (void)setTestLatitude:(id)a0;
+ (void)setInputOneContent:(id)a0;
+ (void)setInputTwoContent:(id)a0;
+ (void)clearIPAddress;
+ (void)clearInputContent;
+ (id)sharedInstance;
+ (BOOL)isDemoEnvironment;
+ (void)setHostPort:(id)a0;

- (void)initializeCurrentTime;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
