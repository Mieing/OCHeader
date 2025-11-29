@class EcsTagsViewModel, EcsRichTextButtonViewModel, EcsFinderFeedPopupViewModel, NSURL, EcsRichLabelViewModel, NSObject, FinderFeedEcProductCard;

@interface EcsFinderFeedSingleProductViewModel : NSObject

@property (retain, nonatomic) NSObject *finderReportInfo;
@property (nonatomic) long long startShowTime;
@property (readonly, nonatomic) FinderFeedEcProductCard *productCard;
@property (copy, nonatomic) id /* block */ getCurrentNavigationControllerAction;
@property (readonly, nonatomic) NSURL *headImgUrl;
@property (readonly, nonatomic) EcsFinderFeedPopupViewModel *popupVM;
@property (readonly, nonatomic) EcsRichLabelViewModel *titleVM;
@property (readonly, nonatomic) EcsRichLabelViewModel *priceVM;
@property (readonly, nonatomic) EcsTagsViewModel *priceDescTagVM;
@property (readonly, nonatomic) EcsTagsViewModel *productTagsVM;
@property (readonly, nonatomic) EcsRichLabelViewModel *bulkBuyIconDescVM;
@property (readonly, nonatomic) EcsRichLabelViewModel *bulkBuyAvatarDescVM;
@property (readonly, nonatomic) EcsRichLabelViewModel *customerTitleVM;
@property (readonly, nonatomic) EcsRichLabelViewModel *customerMoreVM;
@property (readonly, nonatomic) EcsRichTextButtonViewModel *buyButtonVM;

+ (id)createWithProductCardDataBuffer:(id)a0;
+ (id)createWithProductCard:(id)a0;

- (id)initWithProductCard:(id)a0;
- (void)setProductCard:(id)a0;
- (void)setFinderCardInfo:(id)a0;
- (void)onShow;
- (void)onDisappear;
- (void)mmDataElementId:(id)a0 actionType:(id)a1 elementInfo:(id)a2;
- (void).cxx_destruct;

@end
