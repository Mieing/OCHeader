@class NSString, ACCLyricsStickerConfig, IESInfoStickerProps;
@protocol ACCStickerContainerProtocol;

@interface ACCLyricsStickerContentView : UIView <ACCStickerEditContentProtocol>

@property (nonatomic) long long stickerId;
@property (retain, nonatomic) ACCLyricsStickerConfig *config;
@property (retain, nonatomic) IESInfoStickerProps *stickerInfos;
@property (nonatomic) struct CGPoint { double x; double y; } beginOrigin;
@property (nonatomic) BOOL ignoreUpdateFrameWithGesture;
@property (copy, nonatomic) id /* block */ transparentChanged;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stickerViewIdentifier;
- (id)copyForContext:(id)a0;
- (void)updateWithInstance:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)updateSize:(struct CGSize { double x0; double x1; })a0;

@end
