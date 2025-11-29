@class NSString, UIView;
@protocol AWEAwemeDetailImagePreviewFromContextProvider, AWEAwemeNewDetailTableContainerProtocol;

@interface AWEAwemeDetailTransitionService : NSObject <AWEAwemeDetailImagePreviewToContextProvider>

@property (retain, nonatomic) UIView *imagePreviewMaskView;
@property (retain, nonatomic) id<AWEAwemeDetailImagePreviewFromContextProvider> awemeDetailImagePreviewFromContextInstance;
@property (weak, nonatomic) id<AWEAwemeNewDetailTableContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithParams:(id)a0;
- (void)initialDataSourceFetchDidFinished;
- (void)setupCoverTransitionWithParams:(id)a0;
- (void)transferImagePreviewMask;
- (void).cxx_destruct;

@end
