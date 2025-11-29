@class NSString, ACCGrootDetailsStickerModel, UIView;
@protocol ACCRecognitionGrootStickerViewDelegate, ACCStickerContainerProtocol;

@interface ACCRecognitionGrootStickerView : UIView <ACCStickerEditContentProtocol>

@property (retain, nonatomic) UIView *originSuperView;
@property (nonatomic) struct CGPoint { double x; double y; } editCenter;
@property (nonatomic) double currentScale;
@property (weak, nonatomic) id<ACCRecognitionGrootStickerViewDelegate> delegate;
@property (retain, nonatomic) ACCGrootDetailsStickerModel *stickerModel;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)restoreToSuperView:(id)a0 animationDuration:(double)a1 animationBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)updateEdtingFrames;
- (void)clickSelfView;
- (void)transportToEditWithSuperView:(id)a0 animation:(id /* block */)a1 animationDuration:(double)a2;
- (id)getSocialFont:(double)a0 retry:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
