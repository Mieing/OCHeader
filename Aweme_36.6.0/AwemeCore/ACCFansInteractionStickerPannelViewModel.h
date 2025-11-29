@class NSString, RACSignal, RACSubject, NSMutableArray;
@protocol ACCVideoEditFlowControlService;

@interface ACCFansInteractionStickerPannelViewModel : ACCEditViewModel <ACCFansInteractionStickerPanelServiceProtocol>

@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowControlService;
@property (nonatomic) BOOL isStickerHandling;
@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) RACSignal *willShowStickerPanelSignal;
@property (retain, nonatomic) RACSubject *willShowStickerPanelSubject;
@property (retain, nonatomic) RACSignal *didDismissStickerPanelSignal;
@property (retain, nonatomic) RACSubject *didDismissStickerPanelSubject;
@property (retain, nonatomic) RACSignal *willDismissStickerPanelSignal;
@property (retain, nonatomic) RACSubject *willDismissStickerPanelSubject;
@property (nonatomic) BOOL stickerPanelShowing;
@property (copy, nonatomic) id /* block */ dismissPanelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;

- (id)aAWEStudioGlobalConfig;
- (void)registObserver:(id)a0;
- (void)willDismissStickerPanel:(id)a0;
- (void)didDismissStickerPanelWithSelectedSticker:(id)a0;
- (void)willShowStickerPanel;
- (BOOL)hasFansInteractionStickerPannel;
- (BOOL)isEnableLiveSticker;
- (BOOL)isEnablePollSticker;
- (BOOL)handleSelectSticker:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
