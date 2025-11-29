@class NSDictionary;

@interface IESGCPGameMetaDataUserInfoModel : NSObject

@property (copy, nonatomic) NSDictionary *userInfoCacheMap;
@property (readonly, nonatomic) long long activeStatus;
@property (readonly, nonatomic) long long historyPkgStatus;

- (void).cxx_destruct;

@end
