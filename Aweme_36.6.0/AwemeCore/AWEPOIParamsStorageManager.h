@class NSString;

@interface AWEPOIParamsStorageManager : NSObject

@property (retain, nonatomic) NSString *paramsVerifyBundleVersion;
@property (nonatomic) double paramsVerifyBundleUpdateTimestamp;

+ (id)sharedStorage;

- (id)store;

@end
