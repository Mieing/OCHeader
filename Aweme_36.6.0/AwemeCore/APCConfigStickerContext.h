@class ACCConfigConsumeResult, ACCStickerContainerView, ACCMediaContainerView;

@interface APCConfigStickerContext : NSObject

@property (readonly, nonatomic) ACCMediaContainerView *mediaContainerView;
@property (readonly, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (retain, nonatomic) ACCConfigConsumeResult *result;

- (void).cxx_destruct;
- (id)initWithProject:(id)a0;

@end
