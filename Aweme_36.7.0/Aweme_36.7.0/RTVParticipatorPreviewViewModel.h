@class RTVVoipParticipator;

@interface RTVParticipatorPreviewViewModel : RTVPreviewViewModel

@property (nonatomic) BOOL disableVideoRender;
@property (readonly, nonatomic) RTVVoipParticipator *participator;

- (id)initWithParticipator:(id)a0;
- (void).cxx_destruct;

@end
