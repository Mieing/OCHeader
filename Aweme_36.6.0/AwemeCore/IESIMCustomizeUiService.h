@class NSString;

@interface IESIMCustomizeUiService : NSObject <IESIMCustomizeUiService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)docWithScene:(int)a0;
- (id)fontWithScene:(int)a0;
- (id)colorWithScene:(int)a0;
- (BOOL)applySpecialColorToView:(id)a0 withScene:(int)a1;
- (BOOL)hasImageWithScene:(int)a0;
- (id)imageWithScene:(int)a0;
- (BOOL)imageWithScene:(int)a0 completion:(id /* block */)a1;
- (id)valueWithScene:(int)a0;
- (id)aAWEIMCustomUIAdapter;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
