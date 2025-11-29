@class AWEIMCommerceShopGuideInfo, NSString;

@interface AWEIMCommerceShopGuideInfoManager : NSObject <AWEUserMessage, AWEIMCommerceShopGuideInfoInterface>

@property (retain, nonatomic) AWEIMCommerceShopGuideInfo *shopGuideInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)__clearCache;
- (void)fetchShopGuideInfoWithSecUID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
