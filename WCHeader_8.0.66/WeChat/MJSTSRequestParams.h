@class NSString, MJSpeechAudioData;

@interface MJSTSRequestParams : MJSpeechRequestParams

@property (readonly, nonatomic) MJSpeechAudioData *audioData;
@property (readonly, nonatomic) NSString *roleID;

- (id)initWithAudioData:(id)a0 roleID:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
