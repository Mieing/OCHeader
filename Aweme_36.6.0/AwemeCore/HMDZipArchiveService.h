@class NSString;

@interface HMDZipArchiveService : NSObject <HMDZipArchiveProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)zipArchive;
+ (BOOL)createZipFileAtPath:(id)a0 withFilesAtPaths:(id)a1;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 keepParentDirectory:(BOOL)a2;


@end
