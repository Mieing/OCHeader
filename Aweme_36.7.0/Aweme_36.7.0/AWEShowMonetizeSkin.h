@class NSDictionary, NSString;

@interface AWEShowMonetizeSkin : NSObject <AWEShowMonetizeSkinService>

@property (copy, nonatomic) NSDictionary *skinConfigResponse;
@property (copy, nonatomic) NSDictionary *skinConfigsBySkinKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getSkinConfigWithKey:(id)a0 completion:(id /* block */)a1;
- (void)handleSkinConfigResponse:(id)a0;
- (id)getSkinConfigFromLocalWithKey:(id)a0;
- (void)setSkinConfigResponseFromFE:(id)a0;
- (void).cxx_destruct;

@end
