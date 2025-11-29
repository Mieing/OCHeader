@class NSString;
@protocol AWEIMEmoticonDisplayViewControllerConfigProtocol;

@interface AWEIMFindSimilarEmoticonInteractor : AWEIMComponentBase <AWEIMHalfScreenContainerVCDelegate, AWEIMFindSimilarEmoticonInteractorInterface>

@property (retain, nonatomic) id<AWEIMEmoticonDisplayViewControllerConfigProtocol> configContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackEnterSimilarDisplayWithConfig:(id)a0;

- (double)minContainerHeightRatioInHalfScreenContainerVC:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)getEmoticonDisplayViewControllerWithConfig:(id)a0;
- (void)showEmoticonDisplayViewControllerWithConfig:(id)a0;
- (void).cxx_destruct;

@end
