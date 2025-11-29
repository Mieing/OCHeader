@class TAVAudioTapProcessorChain;

@interface TAVAudioProcessingTapHolder : NSObject <NSCopying>

@property (nonatomic) struct opaqueMTAudioProcessingTap { } *tapRef;
@property (retain, nonatomic) TAVAudioTapProcessorChain *audioProcessingChain;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
