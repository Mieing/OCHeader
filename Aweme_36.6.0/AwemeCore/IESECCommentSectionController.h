@class NSString, IESECCommentBizTracker, IESECCommentDataController, IESECGoodsCommentContext;

@interface IESECCommentSectionController : IGListSectionController <IESECCollectionViewSectionLayoutProtocol>

@property (retain, nonatomic) IESECCommentDataController *dataController;
@property (retain, nonatomic) IESECGoodsCommentContext *context;
@property (retain, nonatomic) IESECCommentBizTracker *bizTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionLayout;
- (void).cxx_destruct;

@end
