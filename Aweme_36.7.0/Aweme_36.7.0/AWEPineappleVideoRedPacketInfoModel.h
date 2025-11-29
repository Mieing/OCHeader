@class NSString, NSNumber;

@interface AWEPineappleVideoRedPacketInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *videoRedPacketURI;
@property (copy, nonatomic) NSString *videoRedPacketURL;
@property (copy, nonatomic) NSString *videoRedPacketID;
@property (copy, nonatomic) NSString *videoRedPacketOrderID;
@property (copy, nonatomic) NSString *firstShowTime;
@property (retain, nonatomic) NSNumber *videoRedPacketType;
@property (copy, nonatomic) NSString *couponID;
@property (retain, nonatomic) NSNumber *scope;
@property (nonatomic) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
