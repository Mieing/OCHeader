@class NSString;

@interface BDCastProxyRemuxerConfig : NSObject

@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *streamUrl;
@property (copy, nonatomic) NSString *decryptionKey;
@property (nonatomic) double timeoutIntervalForRequest;
@property (nonatomic) long long avioBufferSize;
@property (copy, nonatomic) id /* block */ dataAvailableBlock;
@property (nonatomic) unsigned long long streamType;
@property (copy, nonatomic) NSString *outputResolution;
@property (nonatomic) long long targetWidth;
@property (nonatomic) long long targetHeight;

- (void).cxx_destruct;

@end
