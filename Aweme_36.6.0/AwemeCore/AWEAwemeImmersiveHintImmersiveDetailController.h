@class NSString, UIView;

@interface AWEAwemeImmersiveHintImmersiveDetailController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol, AWEAwemeImmersiveHintImmersiveDetailControllerProtocol>

@property (retain, nonatomic) UIView *hintContainer;
@property (nonatomic) BOOL isNeedRecordUserDragImmersiveDetail;
@property (nonatomic) double lastContentOffsetY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL immersiveShowing;

- (void)onScrollViewWillBeginDragging:(double)a0;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)immersiveAutoShowIfNeed;
- (void)immersiveAutoHide;
- (void)immersiveHintCancel;
- (void)changeCellWithImmersiveStyle:(BOOL)a0 visibleCells:(id)a1;
- (void)immersiveUserDrag;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;

@end
