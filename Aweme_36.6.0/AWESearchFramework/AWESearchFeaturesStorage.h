@class NSDictionary, NSString;

@interface AWESearchFeaturesStorage : NSObject

@property (copy) NSDictionary *sendBackInfo;
@property (copy) NSString *sendBackStr;
@property double updateTimestamp;

+ (id)shareInstance;

- (void)resetUpdateTimeStamp;
- (id)fetchSendBackInfo;
- (void)storeSendBackInfo:(id)a0;
- (void)storeFeaturesInfo;
- (void)storeSendBackStr:(id)a0;
- (id)fetchSendBackStr;
- (void).cxx_destruct;
- (id)init;

@end
