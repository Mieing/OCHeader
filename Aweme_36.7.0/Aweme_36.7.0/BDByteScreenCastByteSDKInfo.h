@class NSString, BDByteCastKit;

@interface BDByteScreenCastByteSDKInfo : NSObject

@property (nonatomic) long long leboRegisteredNum;
@property (nonatomic) long long byteRegisteredNum;
@property (weak, nonatomic) BDByteCastKit *byteCastKit;
@property (readonly, copy, nonatomic) NSString *byteCastContextId;
@property (readonly, copy, nonatomic) NSString *httpServerIp;
@property (readonly, nonatomic) long long httpServerPort;

- (void).cxx_destruct;

@end
