@class NSMutableDictionary, HMDFolderInfoModel, NSMutableSet, NSDictionary, NSString;

@interface HMDFolderInfo : NSObject <HMDDiskVisitor> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) NSMutableDictionary *customFolderMap;
@property (retain, nonatomic) HMDFolderInfoModel *rootFolder;
@property (retain, nonatomic) NSMutableDictionary *customConfigDict;
@property (retain, nonatomic) NSMutableSet *customRegConfigSet;
@property (retain, nonatomic) NSMutableDictionary *documentsAndDataSizeDict;
@property (nonatomic) unsigned long long libraryCacheSize;
@property (copy) NSDictionary *customDepthInfo;
@property (nonatomic) BOOL allowCustomLevel;
@property (nonatomic) unsigned long long fileMaxRecursionDepth;
@property (nonatomic) long long collectMinSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)translateAbsolutePathToRelative:(id)a0;
- (void)visitFile:(id)a0 size:(unsigned long long)a1 lastAccessDate:(id)a2 deepLevel:(long long)a3;
- (void)visitDirectory:(id)a0 size:(unsigned long long)a1 deepLevel:(unsigned long long)a2;
- (void)customPathWithConfigDict:(id)a0;
- (void)addCustomSearchDepathConfig:(id)a0;
- (long long)sizeOfDocumentsAndData;
- (id)reportDiskFolderInfoWithAppFolderSize:(double)a0 compliancePaths:(id)a1;
- (BOOL)checkCustomPathWithPath:(id)a0 size:(unsigned long long)a1 isFolder:(BOOL)a2;
- (void)recordFolderInfoWithRelativePath:(id)a0 size:(unsigned long long)a1 deepLevel:(unsigned long long)a2 isFolder:(BOOL)a3;
- (BOOL)needAddToReportFolderInfo:(id)a0 depthLevel:(unsigned long long)a1;
- (id)infoModelWithPath:(id)a0 size:(unsigned long long)a1 isFolder:(BOOL)a2 isUserCustomPath:(BOOL)a3 level:(unsigned long long)a4;
- (id)formatPathWithOriginPath:(id)a0;
- (id)resolutionCustomDepthDict:(id)a0;
- (id)folderInfosDictWithAppFolderSize:(double)a0 folderInfo:(id)a1 compliancePaths:(id)a2 matchedPrefix:(id)a3;
- (id)reportDiskFolderInfoWithAppFolderSize:(double)a0;
- (id)folderInfosDictWithAppFolderSize:(double)a0 folderInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearData;
- (void)setupData;

@end
