@class NSString, RACSignal, RACSubject, NSMutableArray, NSNumber;

@interface ACCStickerPannelViewModel : NSObject <ACCStickerPanelServiceProtocol>

@property (retain, nonatomic) NSMutableArray *observers;
@property (nonatomic) BOOL isStickerHandling;
@property (retain, nonatomic) RACSignal *willShowStickerPanelSignal;
@property (retain, nonatomic) RACSubject *willShowStickerPanelSubject;
@property (retain, nonatomic) RACSignal *didShowStickerPanelSignal;
@property (retain, nonatomic) RACSubject *didShowStickerPanelSubject;
@property (retain, nonatomic) RACSubject *didDismissStickerAnimatePanelSignal;
@property (retain, nonatomic) RACSubject *didDismissStickerAnimatePanelSubject;
@property (retain, nonatomic) RACSignal *didDismissStickerPanelSignal;
@property (retain, nonatomic) RACSubject *didDismissStickerPanelSubject;
@property (retain, nonatomic) RACSignal *willDismissStickerPanelSignal;
@property (retain, nonatomic) RACSubject *willDismissStickerPanelSubject;
@property (retain, nonatomic) RACSignal *showStickerSearchSignal;
@property (retain, nonatomic) RACSubject *showStickerSearchSubject;
@property (nonatomic) BOOL stickerPanelShowing;
@property (copy, nonatomic) id /* block */ dismissPanelBlock;
@property (copy, nonatomic) id /* block */ configureGestureWithView;
@property (retain, nonatomic) NSNumber *replacedStickerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registObserver:(id)a0;
- (void)unRegistObserver:(id)a0;
- (void)willDismissStickerPanel:(id)a0;
- (void)didDismissStickerPanelWithSelectedSticker:(id)a0;
- (BOOL)handleReplaceWithSticker:(id)a0 fromTab:(id)a1 willReplaceStickerId:(long long)a2;
- (BOOL)handleSelectSticker:(id)a0 fromTab:(id)a1;
- (BOOL)handleReplaceWithThirdPartySticker:(id)a0 fromTab:(id)a1 willReplaceStickerId:(long long)a2;
- (BOOL)handleSelectThirdPartySticker:(id)a0 fromTab:(id)a1;
- (void)willShowStickerPanel;
- (void)didDismissStickerPanelAnimation;
- (void)didShowStickerPanel;
- (void)handleShowStickerSearch;
- (BOOL)handleReplaceStickerWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
