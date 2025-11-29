@class LLVSDManager, NSString, UIScrollView, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface LLVSDExtension : NSObject <LLDitoExtensionProtocol, LLVSDContainerProtocol>

@property (retain, nonatomic) LLVSDManager *manager;
@property (weak, nonatomic) UIScrollView *lastNestedScrollView;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isHalfScreen;
- (void)didLoadPageModel:(id)a0;
- (void)componentView:(id)a0 didUpdateViewModel:(id)a1;
- (void)vsdContainer:(id)a0 stateChange:(unsigned long long)a1;
- (void)vsdContainer:(id)a0 offsetChange:(double)a1;
- (BOOL)vsdEnable;
- (double)vsdOffsetWithState:(unsigned long long)a0;
- (float)halfRatio;
- (unsigned long long)vsdState;
- (void)vsdChangeToState:(unsigned long long)a0;
- (unsigned long long)halfContainerType;
- (id)fetchAllDelegateReceiver;
- (unsigned long long)dismissTypeWithTypeString:(id)a0;
- (long long)topOffsetDistance;
- (id)fetchAllDelegateReceiverTmp;
- (id /* block */)tmp_customDismissWithAnimationBlock;
- (void).cxx_destruct;
- (id)maskView;
- (void)dealloc;

@end
