@class NSString, NSData, MMFinderLiveTaskId;

@interface WCFinderLiveGetDeliveryDetailRequestModel : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSData *reqBuffer;

- (void).cxx_destruct;

@end
