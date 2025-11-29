@class NSString;

@interface XPlayCommonParamsManager : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *appChannel;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *userId;

+ (id)sharedManager;

- (void).cxx_destruct;

@end
