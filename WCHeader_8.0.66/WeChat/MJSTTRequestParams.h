@class MJSpeechAudioData;

@interface MJSTTRequestParams : MJSpeechRequestParams

@property (readonly, nonatomic) MJSpeechAudioData *audioData;

- (id)initWithAudioData:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
