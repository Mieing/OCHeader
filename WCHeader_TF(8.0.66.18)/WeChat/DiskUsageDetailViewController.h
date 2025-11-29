@class NSString, MMFolder, MMTableView;

@interface DiskUsageDetailViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *m_tableView;
@property (copy, nonatomic) NSString *rootPath;
@property (retain, nonatomic) MMFolder *m_folder;
@property (nonatomic) BOOL bPro;
@property (nonatomic) int showFileClass;
@property (nonatomic) BOOL showForMyself;
@property (nonatomic) BOOL ignoreDuplicateFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_getDescriptionStringNum:(id)a0;
+ (id)getStringWithFileClass:(int)a0;
+ (unsigned long long)sumFileSize:(id)a0 ignoreDuplicate:(BOOL)a1;
+ (unsigned long long)sumFileClassSize:(id)a0 showClass:(int)a1 ignoreDuplicate:(BOOL)a2;
+ (unsigned long long)sumFileClassSize:(id)a0 showClass:(int)a1 ignoreDuplicate:(BOOL)a2 ignoreClass:(BOOL)a3 fileIDDict:(id)a4;
+ (unsigned long long)sumFileTypeSize:(id)a0 showTypeInUse:(int)a1 ignoreDuplicate:(BOOL)a2 fileIDDict:(id)a3 resultFileInfo:(id)a4;

- (void)initTableView;
- (void)p_onLongPressNavBar;
- (void)p_handleThreeTap:(id)a0;
- (void)p_handleLongPress:(id)a0;
- (void)selectShowType;
- (void)viewDidLoad;
- (void)startScanFolder:(id)a0 withParentPath:(id)a1 depth:(int)a2;
- (void)scanSubfolder:(id)a0 withParentPath:(id)a1 depth:(int)a2;
- (void)scanFileInFolder:(id)a0 withParentPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
