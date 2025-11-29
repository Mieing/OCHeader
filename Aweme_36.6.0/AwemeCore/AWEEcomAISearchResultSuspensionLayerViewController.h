@class AWEEcomAISearchAnnieXView, NSString;
@protocol AWEEcomAISearchResultSuspensionLayerViewModelProtocol;

@interface AWEEcomAISearchResultSuspensionLayerViewController : UIViewController <AWEEcomAISearchResultSuspensionLayerViewModelDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) id<AWEEcomAISearchResultSuspensionLayerViewModelProtocol> viewModel;
@property (retain, nonatomic) AWEEcomAISearchAnnieXView *annieXView;
@property (nonatomic) double lastSendTime;
@property (nonatomic) BOOL scrollViewIsDragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildInputBoxIfNeeded;
- (void)addSubView:(id)a0;
- (void)updateDynamicPatchLogData:(id)a0;
- (void)resultListScroll:(id)a0;
- (void)updateInputBoxData:(id)a0;
- (void)triggerInputForProductInquiry:(id)a0;
- (void)sendToAnnieXViewWithEvent:(id)a0 params:(id)a1;
- (void)refreshPage;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithViewModel:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)loadView;

@end
