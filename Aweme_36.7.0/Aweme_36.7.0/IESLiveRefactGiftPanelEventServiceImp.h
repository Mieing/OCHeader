@class IESLiveGiftPanelDataSharing, RACCompoundDisposable;

@interface IESLiveRefactGiftPanelEventServiceImp : NSObject

@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (weak, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
