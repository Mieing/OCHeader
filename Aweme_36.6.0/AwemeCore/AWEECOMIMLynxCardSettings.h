@class NSDictionary, NSCache;

@interface AWEECOMIMLynxCardSettings : NSObject

@property (copy, nonatomic) NSDictionary *lynxMessageTypeDict;
@property (copy, nonatomic) NSDictionary *cardMap;
@property (retain, nonatomic) NSCache *UIDLMemoryCache;
@property (copy, nonatomic) NSDictionary *templateCardBackupRenderTips;
@property (copy, nonatomic) NSDictionary *templateCardHintMap;
@property (copy, nonatomic) NSDictionary *schemeCanReuse;

+ (void)prepareGeckoResource;
+ (id)lynxCardGeckoChannels;
+ (id)templateCardBackupConfigWithVersionStr:(id)a0;
+ (id)templateCardBackupDefaultLynxConfig;
+ (BOOL)templateCanReuseWithScheme:(id)a0;
+ (id)shared;

- (BOOL)isLynxCard:(id)a0;
- (BOOL)isPlatformLynxCard:(id)a0;
- (id)lynxCardConfigWithMessage:(id)a0;
- (id)platformServiceLynxCardUITemplateData:(id)a0;
- (id)schemaInCardConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
