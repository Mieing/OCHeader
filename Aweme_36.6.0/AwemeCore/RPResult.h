@class NSData;

@interface RPResult : NSObject

@property (retain, nonatomic) NSData *outData;
@property (nonatomic) long long errCode;
@property (nonatomic) unsigned char sw1;
@property (nonatomic) unsigned char sw2;
@property (nonatomic) long long nfcErrCode;

- (void).cxx_destruct;

@end
