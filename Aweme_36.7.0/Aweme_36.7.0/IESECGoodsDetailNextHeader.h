@class IESECGoodsCommentHeader, NSString;

@interface IESECGoodsDetailNextHeader : IESECGoodsDetailMainHeader <IESECGoodsCommentHeaderActionDelegate>

@property (retain, nonatomic) IESECGoodsCommentHeader *commentHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapClose;
- (void)tapShare;
- (void)tapShoppingCart;
- (void)tapTitle;
- (void)tapMore;
- (void)tapCollectionWithCompletion;
- (id)initWithContentProvider:(id)a0 tracker:(id)a1 parameters:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
