@class NSString, ACCStickerContainerView;
@protocol ACCStickerServiceProtocol;

@interface ACCAEGlobalStickerServiceImpl : NSObject <ACCAEGlobalStickerServiceProtocol>

@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (readonly, weak, nonatomic) ACCStickerContainerView *globalStickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStickerService:(id)a0;
- (void).cxx_destruct;

@end
