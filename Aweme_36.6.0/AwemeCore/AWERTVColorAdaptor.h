@class NSString;

@interface AWERTVColorAdaptor : NSObject <RTVColorAdaptorInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)colorWithType:(long long)a0;
- (id)colorWithType:(long long)a0 inTheme:(unsigned long long)a1;
- (id)__notificationColorWith:(long long)a0;
- (id)__colorWith:(long long)a0 theme:(id)a1;
- (id)__aweThemeNameWith:(unsigned long long)a0;
- (id)__aweColorNameWith:(long long)a0;

@end
