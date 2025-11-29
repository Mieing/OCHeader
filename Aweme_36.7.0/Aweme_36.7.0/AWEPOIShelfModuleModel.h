@class NSMutableDictionary, NSArray, NSString, NSDictionary, AWEPOIShelfNavigationBarModel;

@interface AWEPOIShelfModuleModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *spuCountMap;
@property (retain, nonatomic) AWEPOIShelfNavigationBarModel *navBarModel;
@property (retain, nonatomic) NSArray *spuModelList;
@property (copy, nonatomic) NSString *moduleID;
@property (nonatomic) BOOL showRecommend;
@property (retain, nonatomic) NSArray *cpsList;
@property (nonatomic) BOOL showShelfCouponBar;
@property (retain, nonatomic) NSDictionary *reputationRecommendVo;
@property (retain, nonatomic) NSDictionary *videoSameAtmosphereVo;
@property (nonatomic) BOOL showCps;
@property (nonatomic) long long highLightType;
@property (nonatomic) long long currentModuleIndex;
@property (retain, nonatomic) NSDictionary *highLightHeaderImgIcon;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDictionary *videoSameAtmosphereHeaderData;
@property (retain, nonatomic) NSDictionary *cpsAtmosphereHeaderData;
@property (nonatomic) BOOL hasElevator;
@property (nonatomic) BOOL inGrouponModuleGroup;
@property (nonatomic) BOOL hasCouponCard;
@property (nonatomic) BOOL isFirstModule;
@property (nonatomic) BOOL hasAtmosphere;

- (id)initWithData:(id)a0 extraInfo:(id)a1;
- (double)shelfTotalHeight;
- (void)parseData:(id)a0 extraInfo:(id)a1;
- (id)sortedSpuList;
- (id)supTypeMap;
- (long long)calculateStartIndex:(id)a0;
- (void).cxx_destruct;

@end
