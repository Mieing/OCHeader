@class NSString;

@interface IESIMSpeechEngineServiceImpl : HTSService <IESIMSpeechEngineService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (id)makePCMWithInputFormat:(id)a0;
- (id)makeAudioRecorderWithURL:(id)a0 audioFormat:(long long)a1;
- (id)convertBuffer:(id)a0 toFormat:(id)a1 error:(id *)a2;

@end
