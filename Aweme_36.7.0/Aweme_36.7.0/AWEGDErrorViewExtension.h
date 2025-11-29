@class AWEPOICubeView, NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEGDErrorViewExtension : NSObject <DitoExtensionProtocol, AWEPOICubeViewDelegate>

@property (weak, nonatomic) AWEPOICubeView *errorView;
@property (nonatomic) int retry;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (void)loadErrorType:(long long)a0 error:(id)a1;
- (void)addErrorViewWithParams:(id)a0;
- (BOOL)isBodyStartLoad;
- (id)lynxContainerViewWithErrorDict:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)didLayout;
- (void)removeErrorView;

@end
