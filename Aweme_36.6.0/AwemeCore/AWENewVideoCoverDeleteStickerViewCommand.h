@class ACCStickerContainerView, NLELayer_OC, UIView;
@protocol ACCStickerProtocol;

@interface AWENewVideoCoverDeleteStickerViewCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) NLELayer_OC *deleteLayer;
@property (retain, nonatomic) UIView<ACCStickerProtocol> *deleteStickerView;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;
@property (nonatomic) long long deleteLayerIndex;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
