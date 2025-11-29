@class NSString, NSDictionary, NSMutableDictionary;

@interface AWEDetailTrendCommonTrackParams : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *fromGroupID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *imprID;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL isCoverChange;
@property (nonatomic) BOOL isTrendsPage;
@property (copy, nonatomic) NSString *flashMobID;
@property (copy, nonatomic) NSString *flashMobTitle;
@property (copy, nonatomic) NSString *trendsID;
@property (copy, nonatomic) NSDictionary *trendsTrackPassThrough;
@property (copy, nonatomic) NSString *trendsName;
@property (copy, nonatomic) NSString *UGID;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *trendsType;
@property (copy, nonatomic) NSString *sucaiType;
@property (copy, nonatomic) NSString *itemTrendsType;
@property (copy, nonatomic) NSString *trendsLabel;
@property (copy, nonatomic) NSString *recExtra;
@property (retain, nonatomic) NSMutableDictionary *previousAwemeInfoDic;
@property (copy, nonatomic) NSDictionary *activityMobJson;
@property (readonly, copy, nonatomic) NSString *mobTitle;
@property (copy, nonatomic) NSString *majorUGID;
@property (copy, nonatomic) NSString *minorUGID;
@property (copy, nonatomic) NSString *collectMaterial;
@property (copy, nonatomic) NSString *commonTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateWithAwemeModel:(id)a0;
- (id)previousAwemeModelMaterialsInfoDic;
- (id)configTrendTypeWithTrendInfoModel:(id)a0;
- (void)updateWithRouterParamDict:(id)a0;
- (void)updateWithTrendModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
