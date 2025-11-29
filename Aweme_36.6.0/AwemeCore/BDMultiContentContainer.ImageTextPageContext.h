@interface BDMultiContentContainer.ImageTextPageContext : AWEPageContext {
    void /* unknown type, empty encoding */ _isPinchZoomable;
    void /* unknown type, empty encoding */ _needMoveToCenterWhenMagnify;
    void /* unknown type, empty encoding */ _imageTextContentMode;
    void /* unknown type, empty encoding */ _isMuted;
    void /* unknown type, empty encoding */ _needFastPlay;
    void /* unknown type, empty encoding */ _imageTextplayMode;
    void /* unknown type, empty encoding */ _isClipMuted;
    void /* unknown type, empty encoding */ isLivePhotoReplaying;
    void /* unknown type, empty encoding */ fastPlayConfig;
    void /* unknown type, empty encoding */ imageTextOriginPlayMode;
}

@property (nonatomic) BOOL isPinchZoomable;
@property (nonatomic) BOOL needMoveToCenterWhenMagnify;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL needFastPlay;
@property (nonatomic) BOOL useInternalVideoController;
@property (nonatomic) BOOL needAnimateWhenUpdateContent;

- (void).cxx_destruct;
- (id)init;

@end
