@class NSString, AWEURLModel;

@interface AWEPOIUGCRateScoreNavigationBarBizModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *originBG;
@property (copy, nonatomic) NSString *changeBG;
@property (retain, nonatomic) AWEURLModel *originRateCenter;
@property (retain, nonatomic) AWEURLModel *changeRateCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)naviBarViewModelWithContenxt:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void)pageDidScroll:(id)a0 context:(id)a1 thresholdOffsetY:(double)a2;
- (void).cxx_destruct;

@end
