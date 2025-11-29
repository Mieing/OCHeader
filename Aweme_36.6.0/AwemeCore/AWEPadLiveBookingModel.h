@class NSNumber, NSString, AWEPadLiveBookingConfig;

@interface AWEPadLiveBookingModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) AWEPadLiveBookingConfig *configInfo;
@property (nonatomic) long long bookingId;
@property (nonatomic) long long anchorId;
@property (nonatomic) BOOL hasSubscribe;
@property (copy, nonatomic) NSString *room;
@property (nonatomic) unsigned long long timeLineStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
