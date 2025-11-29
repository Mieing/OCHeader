@class NSString, NSObject;

@interface QBBeaconResponsePackage : NSObject

@property (nonatomic) char result;
@property (nonatomic) int cmd;
@property (retain, nonatomic) NSObject *sBuffer;
@property (retain, nonatomic) NSString *gateWayIp;
@property (nonatomic) char encryType;
@property (nonatomic) char zipType;
@property (nonatomic) long long serverTime;
@property (retain, nonatomic) NSString *encKey;
@property (retain, nonatomic) NSString *encPubKey;

+ (id)initWithWUPModel:(id)a0;
+ (id)modelObjectWithCmd:(unsigned long long)a0 data:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;

@end
