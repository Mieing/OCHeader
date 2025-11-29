@class NSString, NSArray;

@interface MMDeleteFileModel : NSObject <PBCoding>

@property (retain, nonatomic) NSString *rtxName;
@property (retain, nonatomic) NSString *fileDescription;
@property (retain, nonatomic) NSArray *filePaths;
@property (nonatomic) BOOL bUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_rtxName;
+ (void)PBArrayAdd_fileDescription;
+ (void)PBArrayAdd_filePaths;
+ (void)PBArrayAdd_bUpload;
+ (void)initialize;
+ (id)generateDeleteFileModelFromIPXX:(id)a0;
+ (BOOL)checkDeleteFileModelValid:(id)a0;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
