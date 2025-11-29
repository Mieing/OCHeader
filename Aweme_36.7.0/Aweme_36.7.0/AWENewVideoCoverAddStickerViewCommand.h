@class ACCStickerConfig, ACCStickerContainerView, UIView;
@protocol ACCStickerContentProtocol;

@interface AWENewVideoCoverAddStickerViewCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) UIView<ACCStickerContentProtocol> *content;
@property (retain, nonatomic) ACCStickerConfig *config;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
