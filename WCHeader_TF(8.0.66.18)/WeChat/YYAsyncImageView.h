@class NSString, YYImage;

@interface YYAsyncImageView : UIImageView <YYImageDelegate> {
    YYImage *m_image;
    YYImage *m_highlightedImage;
    YYImage *m_defaultImage;
    BOOL m_highlighted;
}

@property (nonatomic) BOOL didSetDarkModeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)setImage:(id)a0;
- (void)setHighlightedImage:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setDefaultImage:(id)a0;
- (void)resetAllImage;
- (id)newAsyncDisplayTask;
- (void)willMoveToWindow:(id)a0;
- (long long)overrideStyle;
- (void)didSetDynamicYYImage;
- (void).cxx_destruct;

@end
