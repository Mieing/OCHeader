@class NSString, TAVSimpleVolumeProcessingNode;
@protocol TAVAudioProcessingNode;

@interface TAVAudioConfiguration : NSObject <TAVAudioProcessingNode, NSCopying>

@property (retain, nonatomic) TAVSimpleVolumeProcessingNode *volumeProcessingNode;
@property (nonatomic) float volume;
@property (retain, nonatomic) id<TAVAudioProcessingNode> effectNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
