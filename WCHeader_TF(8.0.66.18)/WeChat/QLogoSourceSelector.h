@class NSMutableDictionary;

@interface QLogoSourceSelector : NSObject

@property (retain, nonatomic) NSMutableDictionary *logoSourceDict;
@property (retain, nonatomic) NSMutableDictionary *logoImageDict;
@property (retain, nonatomic) NSMutableDictionary *downloadingList;

+ (id)instance;

- (BOOL)hasLocalConfigWithIsBing:(BOOL)a0;
- (id)getLogoWithMapStatus:(id)a0 forBingSource:(BOOL)a1 orSource:(id)a2;
- (BOOL)validateCustomLogoImageReplace:(id)a0;
- (id)getQLogoWithMapStatus:(id)a0 isBing:(BOOL)a1;
- (id)resolveLogoSourceDict:(id)a0;
- (id)getLogoImageBasePath;
- (id)getLogoImagePath:(id)a0;
- (id)readLocalLogoImage:(id)a0;
- (void)clearLogoImageCache;
- (void)downloadLogo:(id)a0 withURL:(id)a1;
- (id)getLogoSourceFilePathWithIsBing:(BOOL)a0;
- (id)readLocalLogoSourceFileWithIsBing:(BOOL)a0;
- (void)updateLogoSourceFile:(id)a0 isBing:(BOOL)a1;
- (void)setLocalLogoResourceDictWithIsBing:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;

@end
