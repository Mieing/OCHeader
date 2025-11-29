@class AWEBDPRankListSelfItemModel, AWEBDPSelfUserInfoModel, NSArray;

@interface AWEBDPGetRankDataRespModel : NSObject

@property (nonatomic) unsigned long long pageNum;
@property (nonatomic) unsigned long long totalNum;
@property (retain, nonatomic) AWEBDPRankListSelfItemModel *selfItem;
@property (retain, nonatomic) AWEBDPSelfUserInfoModel *selfUserInfo;
@property (retain, nonatomic) NSArray *items;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
