@class AWETheaterSectionItemHistoryInfo, AWETheaterSectionItemLongVideoInfo, AWETheaterSectionItemPlayletInfo, AWEAwemeModel, AWETheaterSectionItemBaseInfo, AWETheaterSectionItemLiveInfo, NSString;

@interface AWETheaterCommonSectionItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long itemType;
@property (nonatomic) BOOL shouldAutoPlay;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWETheaterSectionItemBaseInfo *baseInfo;
@property (retain, nonatomic) AWETheaterSectionItemLongVideoInfo *longVideoInfo;
@property (retain, nonatomic) AWETheaterSectionItemPlayletInfo *playletInfo;
@property (retain, nonatomic) AWETheaterSectionItemLiveInfo *liveInfo;
@property (retain, nonatomic) AWETheaterSectionItemHistoryInfo *historyInfo;
@property (readonly, nonatomic) BOOL isVideoItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playletInfoJSONTransformer;
+ (id)awemeModelJSONTransformer;
+ (id)baseInfoJSONTransformer;
+ (id)longVideoInfoJSONTransformer;
+ (id)liveInfoJSONTransformer;
+ (id)historyInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
