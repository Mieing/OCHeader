@class NSString, NSData, NSDictionary;

@interface OMJAsyncSpeechCloneSubmitRequestInfo : NSObject

@property (readonly, nonatomic) NSString *voiceID;
@property (readonly, nonatomic) NSData *audio;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) long long totalLength;
@property (readonly, nonatomic) NSDictionary *extraParams;

- (id)initWithVoiceID:(id)a0 audio:(id)a1 text:(id)a2 offset:(long long)a3 totalLength:(long long)a4 extraParams:(id)a5;
- (void).cxx_destruct;

@end
