@class IESLiveLinkRTCInteractTranscodingAudioConfig, NSMutableDictionary, IESLiveLinkRTCInteractTranscodingVideoConfig, IESLiveLinkRTCInteractTranscodingVideoLayout;

@interface IESLiveLinkRTCInteractCompositeParam : NSObject

@property (retain, nonatomic) IESLiveLinkRTCInteractTranscodingVideoLayout *layout;
@property (retain, nonatomic) IESLiveLinkRTCInteractTranscodingVideoConfig *video;
@property (retain, nonatomic) IESLiveLinkRTCInteractTranscodingAudioConfig *audio;
@property (retain, nonatomic) NSMutableDictionary *advancedConfig;
@property (nonatomic) BOOL compositingChanged;

- (id)initWithRTCVideoCompositingLayout:(id)a0 compositingChanged:(BOOL)a1;
- (unsigned long long)p_changeRenderModeFrom:(long long)a0;
- (void).cxx_destruct;

@end
