@class NSData, NSString;

@interface MJSTSRequestResult : MJSpeechRequestResult

@property (readonly, nonatomic) NSData *pcmData;
@property (retain, nonatomic) NSString *audioFilePath;

- (id)initWithPCMData:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
