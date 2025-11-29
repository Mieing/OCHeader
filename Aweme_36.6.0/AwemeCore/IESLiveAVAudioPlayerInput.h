@class NSString;

@interface IESLiveAVAudioPlayerInput : NSObject <IESLiveAudioPlayerInput>

@property (copy, nonatomic) NSString *audioId;
@property (copy, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
