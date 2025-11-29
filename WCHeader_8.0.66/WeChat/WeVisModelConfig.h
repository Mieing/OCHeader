@class NSString;

@interface WeVisModelConfig : NSObject <YYModel, NSCopying>

@property (retain, nonatomic) NSString *key;
@property (nonatomic) long long subType;
@property (nonatomic) long long compatVersion;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *sha1;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isNeedUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)defaultModelArray;
+ (id)bundleModelArray;
+ (long long)sdkVersion;

- (id)init;
- (id)configFileName;
- (void)copyToOther:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
