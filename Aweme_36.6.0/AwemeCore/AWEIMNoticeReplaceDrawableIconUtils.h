@class NSString;

@interface AWEIMNoticeReplaceDrawableIconUtils : NSObject <AWEIMNoticeReplaceDrawableIconUtilsInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (id)p_urlWithConfigKey:(id)a0;
+ (id)p_iconImageWithURL:(id)a0;
+ (id)p_localImageWithConfigKey:(id)a0;
+ (id)replaceDrawableConfigDict;

- (id)iconImageWithConfigKey:(id)a0;

@end
