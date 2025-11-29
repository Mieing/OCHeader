@class NSString, NSObject;

@interface WCFinderJumpInfoLiteAppCallBackInfo : NSObject

@property (nonatomic) int callbackId;
@property (nonatomic) unsigned long long instanceId;
@property (copy, nonatomic) NSString *storeAppId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSObject *storeData;

- (void).cxx_destruct;

@end
