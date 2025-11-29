@class NSString, NSMutableArray;

@interface WCBootsUpdateInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *baseID;
@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) NSString *pDataMd5;
@property (nonatomic) unsigned int fileSize;
@property (retain, nonatomic) NSMutableArray *eccmd5SignatureList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_baseID;
+ (void)PBArrayAdd_pid;
+ (void)PBArrayAdd_pDataMd5;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_eccmd5SignatureList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
