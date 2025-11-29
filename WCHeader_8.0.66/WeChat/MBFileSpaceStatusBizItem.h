@class NSString;

@interface MBFileSpaceStatusBizItem : NSObject <PBCoding>

@property (nonatomic) unsigned long long totalFileSize;
@property (nonatomic) unsigned int totalFileNum;
@property (nonatomic) unsigned int contentModifyTime;
@property (nonatomic) unsigned int lastScanTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_totalFileSize;
+ (void)PBArrayAdd_totalFileNum;
+ (void)PBArrayAdd_contentModifyTime;
+ (void)PBArrayAdd_lastScanTime;
+ (void)initialize;

@end
