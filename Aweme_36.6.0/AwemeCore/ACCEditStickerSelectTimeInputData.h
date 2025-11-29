@class ACCStickerContainerView, UIView;
@protocol ACCEditPreviewProtocol, ACCEditTransitionServiceProtocol, ACCStickerSelectTimeVCDelegate, ACCSequenceEditServiceProtocol, ACCStickerProtocol, ACCStickerPlayerApplying, ACCEditServiceProtocol;

@interface ACCEditStickerSelectTimeInputData : NSObject

@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCStickerSelectTimeVCDelegate> delegate;
@property (retain, nonatomic) id<ACCStickerPlayerApplying> player;
@property (retain, nonatomic) UIView<ACCStickerProtocol> *stickerView;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;
@property (retain, nonatomic) UIView *playerBgView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerRect;
@property (nonatomic) double playerCornerRadius;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<ACCEditPreviewProtocol> previewService;

- (void).cxx_destruct;

@end
