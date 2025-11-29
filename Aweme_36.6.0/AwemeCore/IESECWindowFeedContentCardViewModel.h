@class IESECWindowFeedViewController, IESECRelationSKUActionHelper, IESECWinFeedEnterParameters, IESECTracker, NSString, IESECRelationFeedCommentViewModel, IESECWinFeedVideoModel;

@interface IESECWindowFeedContentCardViewModel : NSObject <IGListDiffable, IESECFeedContentCardCellModel, IESECFeedContentCardCellDelegate>

@property (nonatomic) BOOL showFullDesc;
@property (retain, nonatomic) IESECRelationSKUActionHelper *actionHelper;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECRelationFeedCommentViewModel *productCommentsModel;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESECWinFeedVideoModel *model;
@property (retain, nonatomic) IESECWinFeedEnterParameters *parameters;
@property (weak, nonatomic) IESECWindowFeedViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)playItem;
- (id)shopName;
- (id)recommendTags;
- (id)buyButtonText;
- (id)videoCover;
- (void)tapBuyButton;
- (void)clickComment;
- (id)commentsModel;
- (BOOL)isDanmakuEnable;
- (id)danmakuDataSource;
- (BOOL)shouldShowVideoComponent;
- (BOOL)shouldShowGoodsCardComponent;
- (BOOL)shouldShowCommentComponent;
- (BOOL)shouldShowVideoTitleComponent;
- (BOOL)shouldShowDescComponent;
- (BOOL)shouldShowTagComponent;
- (id)descContent;
- (BOOL)shouldShowFullDesc;
- (void)expandContent;
- (void)tapShopingCartButton;
- (void)tapOther;
- (void)tapToOtherApp;
- (long long)buyShareID;
- (void)tapOtherWithBuyButton:(BOOL)a0;
- (void)jumpToGoodsDetailBySchemaWithGoodsModel:(id)a0 BtmInfo:(id)a1;
- (id)getGoodsDetailShowRequestWithProductModel:(id)a0;
- (BOOL)isReplyVideo;
- (void).cxx_destruct;
- (id)content;
- (id)title;
- (id)product;
- (struct CGSize { double x0; double x1; })videoSize;

@end
