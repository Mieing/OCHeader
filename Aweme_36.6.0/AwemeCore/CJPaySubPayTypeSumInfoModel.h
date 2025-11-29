@class NSString, CJPayHomePageBannerModel, NSArray, NSDictionary, CJPayZoneSplitInfoModel, CJPayFreqSuggestStyleInfo;
@protocol CJPaySubPayTypeInfoModel;

@interface CJPaySubPayTypeSumInfoModel : JSONModel

@property (copy, nonatomic) NSString *homePageShowStyle;
@property (copy, nonatomic) NSString *homePageGuideText;
@property (nonatomic) BOOL homePageRedDot;
@property (retain, nonatomic) CJPayHomePageBannerModel *homePageBanner;
@property (copy, nonatomic) NSArray<CJPaySubPayTypeInfoModel> *subPayTypeInfoList;
@property (readonly, nonatomic) BOOL isBindedCard;
@property (copy, nonatomic) NSString *subPayTypePageSubtitle;
@property (copy, nonatomic) NSDictionary *bytepayVoucherMsgMap;
@property (copy, nonatomic) NSString *priceZoneShowStyle;
@property (copy, nonatomic) NSArray *cardStyleIndexList;
@property (nonatomic) BOOL useSubPayListVoucherMsg;
@property (retain, nonatomic) CJPayZoneSplitInfoModel *zoneSplitInfoModel;
@property (retain, nonatomic) CJPayFreqSuggestStyleInfo *freqSuggestStyleInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)incomeTypeData;
- (id)balanceTypeData;
- (id)getMethodListTrackStr;
- (void).cxx_destruct;

@end
