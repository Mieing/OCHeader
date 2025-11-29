@class NSString, DitoAction, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIDetailCollectExtension : NSObject <DitoExtensionProtocol>

@property (nonatomic) BOOL isRequestComponent;
@property (nonatomic) BOOL isShowFollow;
@property (retain, nonatomic) DitoAction *requestAction;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindActionAndState;
- (void)initializeExtension;
- (id)constData;
- (id)detailPageContext;
- (void)requestDitoForCollectWithCollectCount;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;

@end
