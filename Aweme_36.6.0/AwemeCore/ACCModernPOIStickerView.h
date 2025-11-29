@class NSString, ACCPOIStickerModel;
@protocol ACCModernPOIStickerViewHelperProtocol, ACCStickerContainerProtocol;

@interface ACCModernPOIStickerView : UIView <ACCStickerEditContentProtocol>

@property (nonatomic) long long stickerId;
@property (retain, nonatomic) NSString *poiIdentifier;
@property (retain, nonatomic) ACCPOIStickerModel *model;
@property (weak, nonatomic) id<ACCModernPOIStickerViewHelperProtocol> helper;
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
- (void).cxx_destruct;

@end
