@class AWEStarAtlasLinkModel, NSArray, NSString, AWEStarAtlasLiveInfoModel;

@interface AWEStarAtlasModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *trackURLList;
@property (copy, nonatomic) NSArray *clickTrackURLList;
@property (nonatomic) long long reviewStatus;
@property (retain, nonatomic) AWEStarAtlasLinkModel *linkModel;
@property (retain, nonatomic) AWEStarAtlasLiveInfoModel *liveInfoModel;
@property (copy, nonatomic) NSString *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)linkModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)clickTrackURLModel;
- (id)trackURLModel;
- (id)statusIntroText;
- (id)statusDetailText;
- (id)statusTrackText;
- (void).cxx_destruct;

@end
