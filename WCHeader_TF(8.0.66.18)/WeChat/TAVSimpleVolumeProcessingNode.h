@class NSString;

@interface TAVSimpleVolumeProcessingNode : NSObject <TAVAudioProcessingNode>

@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
