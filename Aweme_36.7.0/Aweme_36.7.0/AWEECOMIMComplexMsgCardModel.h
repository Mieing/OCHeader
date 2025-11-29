@class AWEECOMIMCardComponentSingleLabelModel, NSString, AWEECOMIMTextComponentModel, NSArray, AWEECOMIMOperationPanelModel, NSMutableArray;

@interface AWEECOMIMComplexMsgCardModel : AWEECOMIMBaseCardModel <AWEECOMIMSubCardBgHeaderProtocol, AWEECOMIMCardComponentCommonTitleViewProtocol>

@property (nonatomic) double spacingBetweenCard;
@property (retain, nonatomic) NSMutableArray *memberItemArrM;
@property (retain, nonatomic) NSMutableArray *couponItemArrM;
@property (readonly, nonatomic) NSMutableArray *originDataTypeArr;
@property (retain, nonatomic) AWEECOMIMTextComponentModel *headTextComponentModel;
@property (nonatomic) long long headTextPostionStyle;
@property (nonatomic) struct CGSize { double width; double height; } headTextContentSize;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *headerBgImgURLString;
@property (nonatomic) long long goodSubType;
@property (copy, nonatomic) NSArray *productItemArr;
@property (retain, nonatomic) AWEECOMIMOperationPanelModel *cardPanelModel;
@property (retain, nonatomic) AWEECOMIMCardComponentSingleLabelModel *productSingleLineModel;
@property (nonatomic) double productTotalHeight;
@property (nonatomic) long long productPostionStyle;
@property (nonatomic) double memberTotalHeight;
@property (readonly, nonatomic) NSArray *memberItemArr;
@property (nonatomic) long long memberPostionStyle;
@property (retain, nonatomic) NSArray *couponModelArr;
@property (nonatomic) long long couponPostionStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cardViewClass;
+ (double)spacingBetweenItems;

- (void)configFootTextLayoutWithMessage:(id)a0;
- (id)msgCommonTrackParams;
- (void)customInitBodyData;
- (void)updateModelWithData:(id)a0 encrypted:(BOOL)a1;
- (BOOL)respondsToServerNotification:(id)a0 uuid:(id)a1 cardType:(id)a2;
- (void)reBulildCellFullContentHeight;
- (void)configSubCardPositionStyle;
- (void)calculateCellHeight;
- (void)parserBodyDictWithContentDict:(id)a0;
- (void)parserGoodContentWithDict:(id)a0;
- (double)subCardContentWidth;
- (struct CGSize { double x0; double x1; })headTextSizeWithHeadTextComponentModel:(id)a0;
- (void)receiveCouponWithItemModel:(id)a0 completion:(id /* block */)a1;
- (void)fetchCouponStatusWithCouponModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
