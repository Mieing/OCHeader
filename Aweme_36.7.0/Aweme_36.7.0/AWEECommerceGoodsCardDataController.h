@class NSCache, NSString;

@interface AWEECommerceGoodsCardDataController : NSObject <AWEECGoodsCardDataControllerProtocol>

@property (retain, nonatomic) NSCache *awemeGoodsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)fetchGoodsCardDataWithAwemeModelList:(id)a0 completion:(id /* block */)a1;
- (void)fetchGoodsCardDataWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)fetchGoodsCardDataWithAwemeModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
