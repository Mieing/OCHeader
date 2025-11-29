@class UIView, BDByteLinkRenderView;

@interface BDByteLinkVideoPlayer : NSObject {
    char *_sps;
    char *_pps;
    unsigned long long _spsSize;
    unsigned long long _ppsSize;
    long long _firstPts;
    long long _lastPts;
    struct opaqueCMFormatDescription { } *_formatDesc;
}

@property (retain, nonatomic) BDByteLinkRenderView *internalRenderView;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (readonly, nonatomic) UIView *renderView;

- (void)handleVideoBuffer:(struct opaqueCMSampleBuffer { } *)a0 pts:(long long)a1;
- (unsigned long long)parseConfigFrame:(char *)a0 size:(unsigned long long)a1;
- (void)enqueueBuffer:(char *)a0 size:(unsigned long long)a1 pts:(long long)a2;
- (void)enqueueNal:(char *)a0 size:(unsigned long long)a1 pts:(long long)a2;
- (void)enqueueRemoteVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 rotation:(int)a1 extendedData:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)reset;
- (void)dealloc;

@end
