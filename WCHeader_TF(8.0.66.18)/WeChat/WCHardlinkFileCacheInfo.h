@class NSString;

@interface WCHardlinkFileCacheInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long fileSize;
@property (copy, nonatomic) NSString *fileMD5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileMD5;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
