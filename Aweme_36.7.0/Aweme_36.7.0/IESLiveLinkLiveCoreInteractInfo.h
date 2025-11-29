@interface IESLiveLinkLiveCoreInteractInfo : NSObject

@property (nonatomic) int interactServerMixUsingBFrame;
@property (nonatomic) BOOL useLiveEnableBFrame;
@property (nonatomic) BOOL enableBFrame;
@property (nonatomic) BOOL interactUsingRtcClientMix;
@property (nonatomic) BOOL enableSingleChorusFixedAVSync;
@property (nonatomic) int singleChorusFrameBufferMaxAllowSize;
@property (nonatomic) int singleChorusAuxMaxAllowDelay;

@end
