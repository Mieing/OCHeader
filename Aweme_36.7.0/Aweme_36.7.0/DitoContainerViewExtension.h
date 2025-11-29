@class NSString, NSMutableDictionary, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface DitoContainerViewExtension : NSObject <DitoExtensionProtocol>

@property (retain, nonatomic) NSMutableDictionary *lastFrameMap;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidUpdateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerType:(id)a1;
- (void).cxx_destruct;

@end
