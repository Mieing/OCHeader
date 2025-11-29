@class NSString, NSMutableArray;

@interface EmoticonSendRecordList : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *md5List;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_md5List;
+ (void)initialize;
+ (id)GetEmoticonRecentSendList;
+ (BOOL)IsEmoticonSendRecordListExist;
+ (void)RemoveEmoticonSendRecordList;
+ (id)getEmoticonRecordRootDir;
+ (id)getEmoticonSendRecordListPath;

- (id)getPBPropertyTable;
- (id)init;
- (void)addMd5:(id)a0;
- (void)delMd5:(id)a0;
- (void)delAllMd5;
- (BOOL)isMd5InList:(id)a0;
- (id)allRecentSendMd5sInOrder;
- (void)saveToFile;
- (void).cxx_destruct;

@end
