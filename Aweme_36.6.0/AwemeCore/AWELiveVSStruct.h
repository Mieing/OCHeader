@class AWELiveVSEpisode, NSString, NSDictionary, NSNumber, AWELiveRoomModel, HTSLiveRoom;
@protocol AWELiveHTSLiveEpisode;

@interface AWELiveVSStruct : AWEBaseApiModel <AWECommentListHeaderViewExtraInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (retain, nonatomic) NSString *episodeRawData;
@property (retain, nonatomic) AWELiveRoomModel *room;
@property (retain, nonatomic) HTSLiveRoom *rawHTSLiveRoomModel;
@property (retain, nonatomic) NSDictionary *commentContext;
@property (retain, nonatomic) NSNumber *itemType;
@property (nonatomic) BOOL didVSBottomBarPreload;
@property (retain, nonatomic) id<AWELiveHTSLiveEpisode> postpositionEpisode;
@property (retain, nonatomic) HTSLiveRoom *postpositionRoom;

+ (id)roomJSONTransformer;
+ (id)episodeFromJsonString:(id)a0;
+ (id)rawModelFromJsonString:(id)a0;
+ (id)rawDictFromJsonString:(id)a0;
+ (id)rawHTSLiveRoomModelJSONTransformer;
+ (id)itemTypeFromJsonString:(id)a0;
+ (id)episodeJSONTransformer;
+ (id)itemTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)a0;
- (id)customExtraView;
- (BOOL)isLiveUseRoom;
- (void).cxx_destruct;
- (id)componentSeparator;
- (id)iconImageName;

@end
