@class NSString, AWEPOILoadingView, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEGDLoadingExtension : NSObject <DitoExtensionProtocol, AWEPOICubeViewDelegate>

@property (nonatomic) BOOL isEndRequest;
@property (weak, nonatomic) AWEPOILoadingView *loadingView;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeLoadingView;
- (void)didEndRequestWithResponse:(id)a0 error:(id)a1;
- (void)initializeExtension;
- (BOOL)isBodyStartLoad;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)didLayout;
- (void)addLoadingView;

@end
