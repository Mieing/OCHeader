@class NSString, TencenLBSZipArchive;

@interface TencentLBSzipAchiveUtils : NSObject <ZipArchiveDelegate>

@property (retain, nonatomic) TencenLBSZipArchive *zipAchive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1;
- (BOOL)zipDir:(id)a0 tozipPath:(id)a1;
- (void)ErrorMessage:(id)a0;
- (void).cxx_destruct;

@end
