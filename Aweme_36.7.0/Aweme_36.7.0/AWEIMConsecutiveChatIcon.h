@class NSString;

@interface AWEIMConsecutiveChatIcon : HTSService <AWEIMConsecutiveChatIcon>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configKeyWithStateKey:(id)a0;
+ (id)urlWithConfigKey:(id)a0;
+ (id)p_urlWithConfigKey:(id)a0;
+ (id)p_iconImageWithURL:(id)a0;
+ (id)iconImageWithConfigKey:(id)a0;
+ (void)prefetchIcons;
+ (id)iconImageWithLevel:(id)a0 flamePetElfIconName:(id)a1;
+ (id)textColorWithKey:(id)a0 inTheme:(id)a1;


@end
