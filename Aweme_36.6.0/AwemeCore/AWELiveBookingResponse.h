@class NSString, AWELiveBookingStatus;

@interface AWELiveBookingResponse : MTLModel <MTLJSONSerializing, AWEPadNetworkMonitorModelProtocol>

@property (retain, nonatomic) AWELiveBookingStatus *bookingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *logID;

+ (id)bookingStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
