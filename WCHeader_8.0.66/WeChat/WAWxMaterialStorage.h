@class NSString, NSMutableDictionary;

@interface WAWxMaterialStorage : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *materialWeAppDic;
@property (retain, nonatomic) NSString *unstatedWording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_materialWeAppDic;
+ (void)PBArrayAdd_unstatedWording;
+ (void)initialize;
+ (id)loadStorage;

@end
