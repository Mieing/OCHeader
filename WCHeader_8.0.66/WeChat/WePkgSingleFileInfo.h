@class NSString;

@interface WePkgSingleFileInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *rid;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *downloadUrl;
@property (nonatomic) unsigned int downloadNetworkType;
@property (nonatomic) unsigned int sizeInBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_rid;
+ (void)PBArrayAdd_mimeType;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_downloadNetworkType;
+ (void)PBArrayAdd_sizeInBytes;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
