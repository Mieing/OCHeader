@class NSString;

@interface AWEECGoodModuleService : HTSService <AWEECGoodModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)anchorContentTagExtraListWithAwemeModel:(id)a0;
- (id)getRichAwemeGoodButtonBusinessImpl;
- (id)getRichAwemeGoodPriceBusinessImpl;
- (Class)getRichAwemeGoodPriceBusinessImplClass;
- (id)getRichAwemeGoodDescriptionBusinessImpl;
- (Class)getRichAwemeGoodDescriptionBusinessImplClass;
- (id)getGoodsProgressElementBusinessImpl;
- (Class)getGoodsProgressElementBusinessImplClass;
- (void)openGoodDetailPageWithPayload:(id)a0;
- (Class)getRichAwemeGoodElementTracker;

@end
