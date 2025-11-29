@class LLDitoComponentViewModel, NSDictionary, NSString, LLDitoPageContext;
@protocol IESLLPOIDetailNGViewModelZoomTransitionProtocol, IESLLPOISyncFeedExtensionGetModelProtocol, LLDitoExtensionContainerProtocol;

@interface IESLLPOIFullPageFeedExtension : NSObject <AWEZoomTransitionOuterContextProvider, LLDitoExtensionProtocol, IESLLPOIFullPageFeedExtensionProtocol>

@property (weak, nonatomic) LLDitoComponentViewModel<IESLLPOISyncFeedExtensionGetModelProtocol, IESLLPOIDetailNGViewModelZoomTransitionProtocol> *lastEnterViewModel;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void).cxx_destruct;

@end
