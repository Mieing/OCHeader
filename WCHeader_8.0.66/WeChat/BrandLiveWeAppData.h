@class NSString, NSData;

@interface BrandLiveWeAppData : NSObject <NSCoding, NSCopying, PBCoding>

@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSData *dataBuffer;
@property (retain, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_versionType;
+ (void)PBArrayAdd_dataBuffer;
+ (void)PBArrayAdd_path;
+ (void)initialize;
+ (id)fromPBWeAppData:(id)a0;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
