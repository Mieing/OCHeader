@class AWECodeGenServiceAccountModel, NSString;

@interface AWEMRSubscribeManageDetailDataContext : NSObject

@property (nonatomic) BOOL useCache;
@property (retain, nonatomic) AWECodeGenServiceAccountModel *serviceAccountModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *serviceAccountId;
@property (copy, nonatomic) NSString *serviceAccountName;
@property (retain, nonatomic) AWECodeGenServiceAccountModel *serviceAccountCache;
@property (retain, nonatomic) AWECodeGenServiceAccountModel *serviceAccountOrigin;

- (void)configWithRouterParamsDictionary:(id)a0;
- (void)updateCacheSubscribeStatusWithSubcategoryId:(id)a0 channelSubscribeInfos:(id)a1;
- (void)generateLocalCacheWithModel:(id)a0;
- (void)updateCacheSubscribeStatus:(long long)a0;
- (void)updateCacheDisturbStatus:(long long)a0;
- (void).cxx_destruct;

@end
