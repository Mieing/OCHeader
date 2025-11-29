@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface DitoHeaderShadowExtension : NSObject <DitoExtensionProtocol>

@property (nonatomic) BOOL shouldSetHeadShadow;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stickManger;
- (void)setShadowForStickContainer:(id)a0;
- (void)setShadowForHeaderContainer:(id)a0;
- (void)updateViewShadow:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
