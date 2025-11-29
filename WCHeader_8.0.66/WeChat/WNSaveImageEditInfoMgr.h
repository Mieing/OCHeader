@class NSString, NSMutableArray;

@interface WNSaveImageEditInfoMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *arrDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)getActionSheetDataSource;
- (void)getCurrentDataSource;
- (void)initDataSourceForImageTypes;
- (void)initDataSourceForFontNames;
- (id)checkFontName:(id)a0;
- (void)initDataSourceForBackgroundImages;
- (void)initDataSourceForTextAlignments;
- (void)getConfigInCurrentMode:(BOOL)a0 completion:(id /* block */)a1;
- (id)getBase64String:(id)a0;
- (void).cxx_destruct;

@end
