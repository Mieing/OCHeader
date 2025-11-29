@class IESECGoodsDetailParameters, UIViewController, IESECGoodsCommentDynamicContext;
@protocol IESECGoodsDetailContentProtocol, IESECCommentViewControllerProtocol;

@interface IESECGoodsDetailContentProvider : NSObject

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) UIViewController<IESECGoodsDetailContentProtocol> *previousGoodsDetailVC;
@property (retain, nonatomic) id<IESECCommentViewControllerProtocol> commentVC;
@property (retain, nonatomic) id<IESECCommentViewControllerProtocol> storeCommentVC;
@property (retain, nonatomic) IESECGoodsCommentDynamicContext *commentDynamicContext;
@property (readonly, nonatomic) BOOL showShareButton;
@property (readonly, nonatomic) BOOL showSearchEntrance;
@property (readonly, nonatomic) BOOL showSearchIcon;
@property (readonly, nonatomic) BOOL showCollectButton;
@property (readonly, nonatomic) BOOL showMoreButton;
@property (readonly, nonatomic) BOOL showConsultButton;
@property (readonly, nonatomic) BOOL showMallButton;
@property (readonly, nonatomic) BOOL showReportButton;
@property (readonly, nonatomic) int shareButtonAnimationStyle;

- (void)openCommentViewContollerSKU:(id)a0;
- (void)updateCommentDynamicWithDict:(id)a0;
- (id)commentContentAtIndex:(unsigned long long)a0;
- (id)commentIsSaasForceBFF;
- (void)setBlockOnChangedHeaderTitle:(id /* block */)a0 commentViewController:(id)a1;
- (void)setBlockOnChangedHeaderSKUTitle:(id /* block */)a0 commentViewController:(id)a1;
- (void)setBlockOnChangedHeaderViewBgColor:(id /* block */)a0 commentViewController:(id)a1;
- (BOOL)isDeleted:(id)a0;
- (id)getContextFromContext:(id)a0;
- (id)abTestCommentVC:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (id)contentAtIndex:(unsigned long long)a0;

@end
