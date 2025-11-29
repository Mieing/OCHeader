@class NSString, __RTVXREngineRTCParams, __RTVXREngineRTCVideoParams;
@protocol Optional;

@interface __RTVXREngineRTCExtInfo : JSONModel

@property (retain, nonatomic) NSString<Optional> *voipSessionId;
@property (retain, nonatomic) __RTVXREngineRTCParams<Optional> *rtcParams;
@property (retain, nonatomic) __RTVXREngineRTCVideoParams<Optional> *videoParams;

+ (id)keyMapper;
+ (id)extInfoWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
