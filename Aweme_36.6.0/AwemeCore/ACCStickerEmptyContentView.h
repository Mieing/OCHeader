@class NSString, AWEInteractionStickerModel;
@protocol ACCStickerContainerProtocol;

@interface ACCStickerEmptyContentView : UIView <ACCStickerEditContentProtocol, ACCStickerContentDisplayProtocol>

@property (retain, nonatomic) AWEInteractionStickerModel *model;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStickerModel:(id)a0;
- (void).cxx_destruct;

@end
