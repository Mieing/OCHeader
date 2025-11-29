@class IESECGoodsCommentContext, NSString, IESECCommentDataController, IESECCommentDetailModel, IESECCommentEvaluatorView;

@interface IESECMeaninglessCommentSectionController : IGListSectionController <IGListSupplementaryViewSource, IESECCommentEvaluatorDelegate>

@property (retain, nonatomic) IESECCommentDetailModel *model;
@property (retain, nonatomic) IESECCommentEvaluatorView *evaluatorView;
@property (weak, nonatomic) IESECCommentDataController *dataController;
@property (retain, nonatomic) IESECGoodsCommentContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (void)didUpdateToObject:(id)a0;
- (void)tapCommentEvaluatorCancel;
- (void)tapCommentEvaluatorEntrance;
- (void)showCommentGuestWindowViewWithDetailModel:(id)a0;
- (void)showGoodsProductEvaluatorViewWithType:(long long)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
