@class NSString, NSArray;

@interface AWEPaySwiftImpl.CCMQrcodePushEventMsg : MTLModel <MTLJSONSerializing, NSObject> {
    void /* function */ opCmd;
    void /* function */ aid;
    void /* function */ did;
    void /* function */ uid;
    void /* function */ trafficId;
    void /* function */ extData;
    void /* unknown type, empty encoding */ serverPushTimeMS;
    void /* unknown type, empty encoding */ clientReceiveTimeMS;
}

@property (nonatomic, copy) NSString *opCmd;
@property (nonatomic, copy) NSString *aid;
@property (nonatomic, copy) NSString *did;
@property (nonatomic, copy) NSString *uid;
@property (nonatomic) long long expireTime;
@property (nonatomic, copy) NSArray *trafficId;
@property (nonatomic, copy) NSString *extData;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
