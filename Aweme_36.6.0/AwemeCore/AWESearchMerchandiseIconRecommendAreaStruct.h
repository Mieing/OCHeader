@class AWESearchMerchandiseIconStruct, NSString, AWESearchMerchandiseBackgroundColorModel, AWESearchMerchandiseIconRecommendAreaLogInfo, AWESearchMerchandiseTextStruct;

@interface AWESearchMerchandiseIconRecommendAreaStruct : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseIconStruct *iconLeft;
@property (retain, nonatomic) AWESearchMerchandiseTextStruct *tag;
@property (retain, nonatomic) AWESearchMerchandiseTextStruct *mainInfo;
@property (retain, nonatomic) AWESearchMerchandiseTextStruct *extraInfo;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL isShowArrow;
@property (retain, nonatomic) AWESearchMerchandiseBackgroundColorModel *bgConfig;
@property (retain, nonatomic) AWESearchMerchandiseIconRecommendAreaLogInfo *logInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
