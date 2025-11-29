@class NSString;

@interface MPPageDataCacheItemTemplateVersionInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int version;
@property (copy, nonatomic) NSString *versionGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_versionGroup;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
