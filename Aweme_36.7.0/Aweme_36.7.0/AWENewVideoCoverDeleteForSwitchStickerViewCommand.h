@class NLELayer_OC, ACCStickerContainerView, UIView;
@protocol ACCStickerProtocol;

@interface AWENewVideoCoverDeleteForSwitchStickerViewCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) UIView<ACCStickerProtocol> *deleteStickerView;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;
@property (nonatomic) long long deleteLayerIndex;
@property (retain, nonatomic) NLELayer_OC *deleteLayer;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
