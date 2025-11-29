@class NSArray, AWESearchECommerceInfoModel, AWEAwemeModel, AWELiveAnnouncement, AWEUserModel;

@interface AWEDoubleColumnSearchMerchandiseUserInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *userInfo;
@property (retain, nonatomic) NSArray *product;
@property (retain, nonatomic) AWESearchECommerceInfoModel *commerceInfo;
@property (retain, nonatomic) AWEAwemeModel *liveInfo;
@property (retain, nonatomic) AWELiveAnnouncement *liveAnnouncement;
@property (copy, nonatomic) NSArray *userServiceInfo;
@property (copy, nonatomic) NSArray *userServiceLogInfo;

+ (id)userInfoJSONTransformer;
+ (id)productJSONTransformer;
+ (id)liveInfoJSONTransformer;
+ (id)userServiceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
