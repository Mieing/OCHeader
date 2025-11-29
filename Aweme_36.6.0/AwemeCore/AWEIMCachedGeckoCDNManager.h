@class NSString;

@interface AWEIMCachedGeckoCDNManager : AWEGeckoCDNManager <IESIMGeckoManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cdnDomain;

- (id)getImageWithName:(id)a0 forTheme:(long long)a1 block:(id /* block */)a2;
- (id)getImageWithName:(id)a0 block:(id /* block */)a1;
- (id)getImageWithName:(id)a0 forTheme:(long long)a1;
- (id)getImageWithName:(id)a0;
- (id)init;

@end
