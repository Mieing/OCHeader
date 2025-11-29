@class NSDictionary, NSString, NSArray, BDARVButtonListModel, BDARVVideoModel, NSNumber, BDARVInspireInfo;

@interface BDARVDataModel : BDARVActionModel <BDARVJSONModel>

@property (copy, nonatomic) NSString *appleid;
@property (copy, nonatomic) NSString *downloadUrl;
@property (copy, nonatomic) NSArray *trackUrlList;
@property (copy, nonatomic) NSArray *clickTrackUrlList;
@property (retain, nonatomic) BDARVButtonListModel *buttonList;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *adLpStyle;
@property (copy, nonatomic) NSNumber *interceptFlag;
@property (copy, nonatomic) NSString *groupid;
@property (copy, nonatomic) NSString *itemid;
@property (copy, nonatomic) NSArray *filterWords;
@property (copy, nonatomic) NSArray *dislike;
@property (retain, nonatomic) BDARVVideoModel *video;
@property (copy, nonatomic) NSString *routeOpenUrl;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *mpURL;
@property (copy, nonatomic) NSArray *preloadResources;
@property (retain, nonatomic) BDARVInspireInfo *inspireAdInfo;
@property (copy, nonatomic) NSString *skanParameters;
@property (copy, nonatomic) NSString *sdkABTestParams;
@property (copy, nonatomic) NSDictionary *sdkABTestParamsDictionary;
@property (copy, nonatomic) NSDictionary *liveData;
@property (retain, nonatomic) NSDictionary *wcMinAppInfo;
@property (copy, nonatomic) NSArray *genericBenefits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
