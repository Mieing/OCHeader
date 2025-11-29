@class NSMutableDictionary, NSBundle, NSMutableArray;

@interface DVECustomResourceProvider : NSObject

@property (retain, nonatomic) NSBundle *resMainBundles;
@property (retain, nonatomic) NSMutableArray *resBundles;
@property (retain, nonatomic) NSMutableDictionary *layoutDic;
@property (retain, nonatomic) NSMutableDictionary *fontDic;
@property (retain, nonatomic) NSMutableDictionary *colorDic;
@property (retain, nonatomic) NSMutableDictionary *configDic;

+ (id)shareManager;
+ (id)p_dictionaryWithLocalJsonPath:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)colorWithName:(id)a0;
- (void)registerDefaultBundle:(id)a0;
- (id)configWithEnableName:(id)a0;
- (id)colorDicForBundle:(id)a0;
- (id)fontDicForBundle:(id)a0;
- (id)layoutDicForBundle:(id)a0;
- (id)configDicForBundle:(id)a0;
- (id)fontValue:(id)a0;
- (void)resourceAssert:(id)a0 msg:(id)a1;
- (id)colorValue:(id)a0;
- (id)layoutValue:(id)a0;
- (id)configValue:(id)a0;
- (void)freeResource;
- (void)unRegisterDefaultBundle:(id)a0;
- (id)fontSystemWithSizeName:(id)a0;
- (id)fontBoldSystemWithSizeName:(id)a0;
- (id)fontItalicSystemWithSizeName:(id)a0;
- (id)fontWithStyleName:(id)a0 sizeName:(id)a1;
- (id)layoutWithPositionName:(id)a0 sizeName:(id)a1 alignmentName:(id)a2 edgeInsetsName:(id)a3 enableName:(id)a4;
- (long long)layoutWithStyleName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)imageWithName:(id)a0;
- (void)setMainBundle:(id)a0;
- (void)clearCache;
- (id)pathForResource:(id)a0 ofType:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
