@class DitoPageContext, NSString, NSDictionary, DitoComponentViewModel;
@protocol DitoExtensionContainerProtocol, AWEPOISyncFeedExtensionGetModelProtocol, AWEPOIDetailNGViewModelZoomTransitionProtocol;

@interface AWEPOIFullPageFeedExtension : NSObject <AWEZoomTransitionOuterContextProvider, DitoExtensionProtocol, AWEPOIFullPageFeedExtensionProtocol>

@property (weak, nonatomic) DitoComponentViewModel<AWEPOISyncFeedExtensionGetModelProtocol, AWEPOIDetailNGViewModelZoomTransitionProtocol> *lastEnterViewModel;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void).cxx_destruct;

@end
