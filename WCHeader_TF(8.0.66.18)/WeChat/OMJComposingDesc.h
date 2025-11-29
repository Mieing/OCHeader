@class NSArray, OMJAudioClip, OMJCoordinatingDesc, OMJLyricOverlayDesc;

@interface OMJComposingDesc : NSObject

@property (readonly, nonatomic) OMJCoordinatingDesc *coordinatingDesc;
@property (readonly, nonatomic) NSArray *mainClips;
@property (retain, nonatomic) OMJAudioClip *audioClip;
@property (retain, nonatomic) OMJLyricOverlayDesc *lyricOverlayDesc;
@property (retain, nonatomic) NSArray *stickerOverlayDescs;
@property (retain, nonatomic) NSArray *textOverlayDescs;

- (id)initWithCoordinatingDesc:(id)a0 mainClips:(id)a1;
- (void).cxx_destruct;

@end
