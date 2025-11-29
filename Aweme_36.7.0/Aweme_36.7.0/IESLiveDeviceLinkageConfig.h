@class NSArray;

@interface IESLiveDeviceLinkageConfig : NSObject

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long subscribeDefaultTimeout;
@property (nonatomic) long long pushEventTimeout;
@property (nonatomic) long long subscribeMinUserCount;
@property (nonatomic) BOOL disablePitayaMessageHandle;
@property (copy, nonatomic) NSArray *pitayaMessageEventList;

- (void).cxx_destruct;
- (id)init;

@end
