@class NSString;
@protocol ACCDraftURSFileManagerDelegate;

@interface ACCDraftURSFileManager : NSObject <ACCDraftURSFileManager>

@property (copy, nonatomic) NSString *draftID;
@property (weak, nonatomic) id<ACCDraftURSFileManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyItemAtPath:(id)a0 toRelativePath:(id)a1 inProjectUUID:(id)a2 error:(id *)a3;
- (id)initWithDraftID:(id)a0;
- (BOOL)fileExistsAtURS:(id)a0 isDirectory:(BOOL *)a1;
- (id)pathWithURS:(id)a0 error:(id *)a1;
- (id)draftURSWithRelativePath:(id)a0 inProjectUUID:(id)a1;
- (void)createDirectoryIfNeededWithPath:(id)a0;
- (BOOL)fileExistsAtURS:(id)a0;
- (void)generateErrorWithCode:(long long)a0 userInfo:(id)a1 error:(id *)a2;
- (id)contentsOfDirectoryAtURS:(id)a0 error:(id *)a1;
- (id)moveItemAtPath:(id)a0 toRelativePath:(id)a1 inProjectUUID:(id)a2 error:(id *)a3;
- (id)copyItemAtURS:(id)a0 toRelativePath:(id)a1 inProjectUUID:(id)a2 error:(id *)a3;
- (BOOL)removeItemAtURS:(id)a0 error:(id *)a1;
- (id)pathWithContentsOfURS:(id)a0 error:(id *)a1;
- (id)writeData:(id)a0 toRelativePath:(id)a1 inProjectUUID:(id)a2 error:(id *)a3;
- (id)dataWithContentsOfURS:(id)a0 error:(id *)a1;
- (id)createDirectoryAtRelativePath:(id)a0 inProjectUUID:(id)a1 withIntermediateDirectories:(BOOL)a2 attributes:(id)a3 error:(id *)a4;
- (BOOL)isReadableFileAtURS:(id)a0;
- (BOOL)isWritableFileAtURS:(id)a0;
- (BOOL)isExecutableFileAtURS:(id)a0;
- (BOOL)isDeletableFileAtURS:(id)a0;
- (void).cxx_destruct;

@end
