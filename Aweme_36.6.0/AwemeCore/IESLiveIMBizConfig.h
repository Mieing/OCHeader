@class NSString, NSData, NSDictionary;
@protocol IESLiveIMDecoder;

@interface IESLiveIMBizConfig : NSObject

@property (copy, nonatomic) NSString *bizIdentity;
@property (retain, nonatomic) id<IESLiveIMDecoder> decoder;
@property (copy, nonatomic) id /* block */ decoderBlock;
@property (nonatomic) BOOL isSupportZstd;
@property (retain, nonatomic) NSData *zstdDictData;
@property (copy, nonatomic) NSString *zstdDictVersion;
@property (nonatomic) long long bizService;
@property (nonatomic) long long bizMethod;
@property (copy, nonatomic) NSString *websocketUrl;
@property (copy, nonatomic) NSString *httpUrl;
@property (copy, nonatomic) NSDictionary *customParams;
@property (nonatomic) BOOL useUnifiedChannel;
@property (nonatomic) BOOL forceUseWS;

- (void).cxx_destruct;
- (id)init;

@end
