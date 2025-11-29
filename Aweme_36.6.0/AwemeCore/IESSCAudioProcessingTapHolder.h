@class IESSCAudioTapProcessorChain;

@interface IESSCAudioProcessingTapHolder : NSObject <NSCopying>

@property (nonatomic) struct opaqueMTAudioProcessingTap { } *tapRef;
@property (retain, nonatomic) IESSCAudioTapProcessorChain *audioProcessingChain;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
