@class NSString;

@interface IESIMDecryptMeasurement : NSObject

@property (nonatomic) double duration;
@property (nonatomic) long long dataSize;
@property (nonatomic) BOOL isOpenssl;
@property (nonatomic) BOOL isChunked;
@property (nonatomic) BOOL isSuccess;
@property (retain, nonatomic) NSString *errMsg;
@property (nonatomic) BOOL isOpenSSLFallback;

- (void).cxx_destruct;

@end
