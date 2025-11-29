@class NSDictionary, NSCache, NSString;

@interface AWESCShortConfigService : NSObject <AWEScreenCastShortConfigService>

@property (copy, nonatomic) NSDictionary *uiSetting;
@property (nonatomic) BOOL isUISettingRequesting;
@property (retain, nonatomic) NSCache *blackInfoCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchUIConfigIfNeeded;
- (BOOL)cachedBlackInfoWithItemID:(id)a0;
- (void)fetchCastBlackInfosWithItemIDs:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
