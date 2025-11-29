@class NSString, NSArray, AWELiveShelfCardElementLotteryModel, AWELiveShelfPagingDataController, AWELiveShelfCardElementSoldCountModel, NSDictionary, NSMutableAttributedString, YYWebImageOperation, AWELiveShelfCardElementModel;

@interface AWELiveShelfListGoodsCellModel : NSObject

@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isTopExplainingItem;
@property (nonatomic) BOOL hasBrand;
@property (nonatomic) BOOL hasBrandSubName;
@property (nonatomic) BOOL hasTitleIcon;
@property (nonatomic) double cardHeight;
@property (nonatomic) long long topMargin;
@property (nonatomic) long long bottomMargin;
@property (nonatomic) long long leftMargin;
@property (nonatomic) long long rightMargin;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSArray *brandIconUrlList;
@property (copy, nonatomic) NSString *brandSubName;
@property (retain, nonatomic) NSMutableAttributedString *attributedTitle;
@property (retain, nonatomic) NSArray *titleIconUrlList;
@property (nonatomic) BOOL isSupportBuy;
@property (copy, nonatomic) NSString *clickBuyToastText;
@property (nonatomic) BOOL needUpdateTitle;
@property (retain, nonatomic) YYWebImageOperation *tagRequestOperation;
@property (retain, nonatomic) AWELiveShelfCardElementModel *element;
@property (retain, nonatomic) NSDictionary *feConfig;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) double cardRadius;
@property (copy, nonatomic) id /* block */ refreshTitleCallback;
@property (copy, nonatomic) id /* block */ refreshTitleLineCallback;
@property (nonatomic) long long titleRenderLine;
@property (nonatomic) double rightWidth;
@property (retain, nonatomic) NSArray *iconUrlList;
@property (copy, nonatomic) NSString *numberStr;
@property (retain, nonatomic) NSArray *imageTagUrlList;
@property (nonatomic) BOOL isExplaining;
@property (nonatomic) BOOL isGray;
@property (copy, nonatomic) NSString *maskText;
@property (nonatomic) long long tagImageType;
@property (copy, nonatomic) NSString *fontColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSArray *poiContentArray;
@property (retain, nonatomic) AWELiveShelfCardElementSoldCountModel *soldCount;
@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) NSArray *sellingPointLabels;
@property (retain, nonatomic) AWELiveShelfCardElementLotteryModel *lottery;
@property (retain, nonatomic) NSString *bizCode;
@property (retain, nonatomic) NSArray *previewTitleImageUrl;
@property (retain, nonatomic) NSArray *previewImages;
@property (copy, nonatomic) NSString *summaryText;
@property (copy, nonatomic) NSString *backgroundImageUrl;
@property (copy, nonatomic) NSString *arrowImageUrl;
@property (copy, nonatomic) NSString *industryPreviewUrl;
@property (nonatomic) unsigned long long seckillStatus;
@property (weak, nonatomic) AWELiveShelfPagingDataController *dataController;

- (void)configNativeModelData;
- (void)dealWithAttributedTitle;
- (long long)numberOfLinesOfTitle;
- (void)configWithBffElement:(id)a0;
- (void)configCardHeight;
- (unsigned long long)getSeckillStatusWithElement:(id)a0;
- (void)configWithCardListItem:(id)a0;
- (void).cxx_destruct;

@end
