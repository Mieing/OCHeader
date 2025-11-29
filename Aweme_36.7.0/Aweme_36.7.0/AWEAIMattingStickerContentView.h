@class NSString, UIView;
@protocol ACCStickerContainerProtocol, ACCStickerProtocol;

@interface AWEAIMattingStickerContentView : UIView <ACCStickerEditContentProtocol>

@property (weak, nonatomic) UIView<ACCStickerProtocol> *wrapperView;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithCurrentPlayerTime:(double)a0;
- (void).cxx_destruct;

@end
