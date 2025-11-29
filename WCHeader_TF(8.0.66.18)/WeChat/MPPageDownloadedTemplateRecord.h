@class NSString, NSMutableDictionary;

@interface MPPageDownloadedTemplateRecord : NSObject <PBCoding>

@property (nonatomic) unsigned int version;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *fullVersion;
@property (retain, nonatomic) NSMutableDictionary *httpHeaderMap;
@property (copy, nonatomic) NSString *versionGroup;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned int downloadSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_fullVersion;
+ (void)PBArrayAdd_httpHeaderMap;
+ (void)PBArrayAdd_versionGroup;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
