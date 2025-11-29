@class IESECOrderListPreloadInfo;

@interface IESECOrderListPreloadInfoManager : NSObject

@property (retain, nonatomic) IESECOrderListPreloadInfo *preloadInfo;
@property (nonatomic) BOOL isUserInOrderListPage;
@property (nonatomic) BOOL hasPreloadRequest;

+ (id)sharedInstance;

- (long long)isExistAvailablePreloadInfoWithSchemeParams:(id)a0;
- (BOOL)p_checkIfPreloadedSchemeMatchesSchemeParams:(id)a0;
- (void)removePreloadInfo;
- (void).cxx_destruct;
- (id)init;

@end
