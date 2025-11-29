@class NSData, NSString, NSDictionary;

@interface MJTTSRequestResult : MJSpeechRequestResult

@property (readonly, nonatomic) NSData *responseData;
@property (retain, nonatomic) NSData *pcmData;
@property (retain, nonatomic) NSString *audioFilePath;
@property (nonatomic) long long audioSampleRate;
@property (readonly, nonatomic) NSDictionary *extraInfos;

- (id)initWithResponseData:(id)a0;
- (id)initWithResponseData:(id)a0 extraInfos:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
