@class NSString;

@interface AWEMVUGBackFromInFlowInsertController : AWEDCFeedBaseController <AWEMVDynamicInsertDetailViewMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnterDetailViewWithModel:(id)a0;
- (void)didLeaveDetailViewWithModel:(id)a0;
- (id)mvContext;
- (void)trackWithItemIds:(id)a0 result:(unsigned long long)a1;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
