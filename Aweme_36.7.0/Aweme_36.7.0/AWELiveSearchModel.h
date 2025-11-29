@class NSString, AWEDoubleColumnSearchMerchandiseUserInfoModel, AWEAwemeModel, NSNumber, AWELiveSearchUIControlModel;

@interface AWELiveSearchModel : AWEBaseApiModel <AWELiveSearchCardTypeProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEAwemeModel *replay;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) AWELiveSearchUIControlModel *uiControlInfo;
@property (retain, nonatomic) AWEAwemeModel *live;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseUserInfoModel *userInfoModel;
@property (copy, nonatomic) NSString *searchKeyword;
@property (retain, nonatomic) NSNumber *rank;

+ (id)userInfoModelJSONTransformer;
+ (id)liveModelJSONTransformer;
+ (id)replayJSONTransformer;
+ (id)uiControlInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)liveSearchCardType;
- (void).cxx_destruct;

@end
