@class AWEPlayInteractionBaseElement;
@protocol AWEPadPlayInteractionAIElementProtocol;

@interface AWEPadPlayInteractionAIViewModel : NSObject

@property (weak, nonatomic) AWEPlayInteractionBaseElement<AWEPadPlayInteractionAIElementProtocol> *element;

- (void)jumpToAISearchWithQuery:(id)a0 image:(id)a1 source:(id)a2;
- (double)sendContentGapTime;
- (void)openSplitSearchWithParams:(id)a0 source:(id)a1;
- (void)openSevenSearchWithParams:(id)a0;
- (id)model;
- (void).cxx_destruct;
- (id)viewController;
- (id)context;
- (id)initWithElement:(id)a0;

@end
