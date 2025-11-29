@class NSString;

@interface CCITSingletonInfo : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) BOOL initSuccess;

+ (id)sharedCCITSingletonInfo;

- (void).cxx_destruct;

@end
