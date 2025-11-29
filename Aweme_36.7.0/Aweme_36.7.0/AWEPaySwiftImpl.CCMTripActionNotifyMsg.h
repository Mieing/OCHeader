@class NSString;

@interface AWEPaySwiftImpl.CCMTripActionNotifyMsg : MTLModel <MTLJSONSerializing, NSObject> {
    void /* function */ stationName;
    void /* function */ actionId;
    void /* function */ trafficId;
    void /* function */ tripActionOpenLink;
    void /* function */ commonResultPageInfo;
    void /* unknown type, empty encoding */ serverPushTimeMS;
    void /* unknown type, empty encoding */ clientReceiveTimeMS;
}

@property (nonatomic, copy) NSString *stationName;
@property (nonatomic, copy) NSString *actionId;
@property (nonatomic) long long scanType;
@property (nonatomic) long long scanTime;
@property (nonatomic, copy) NSString *trafficId;
@property (nonatomic) long long controlTimeInterval;
@property (nonatomic) BOOL usePreRender;
@property (nonatomic, copy) NSString *tripActionOpenLink;
@property (nonatomic, copy) NSString *commonResultPageInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
