@class NSString;

@interface ChatLogDataFileInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned int fileTime;
@property (nonatomic) unsigned long long iNodeNum;
@property (nonatomic) BOOL hasScanned;
@property (nonatomic) unsigned int fileModifyTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileTime;
+ (void)PBArrayAdd_iNodeNum;
+ (void)PBArrayAdd_fileModifyTime;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
