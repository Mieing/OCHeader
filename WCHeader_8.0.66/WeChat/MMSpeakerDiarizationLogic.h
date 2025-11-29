@class NSString, WCCgiBlockHelper, VoiceDiarizationResponse;
@protocol MMSpeakerDiarizationDelegate;

@interface MMSpeakerDiarizationLogic : NSObject

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *voiceId;
@property (retain, nonatomic) WCCgiBlockHelper *cgiHelper;
@property (retain, nonatomic) VoiceDiarizationResponse *response;
@property (weak, nonatomic) id<MMSpeakerDiarizationDelegate> delegate;

- (id)initWithScene:(long long)a0 voiceId:(id)a1;
- (void)startCheck;
- (void)_startCheck;
- (void)cancelCheck;
- (void).cxx_destruct;

@end
