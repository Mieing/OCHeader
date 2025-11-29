@class NSString;

@interface MMDiskWeChatFileClassStat : NSObject <PBCoding>

@property (nonatomic) unsigned int m_fileNum;
@property (nonatomic) unsigned long long m_fileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_fileNum;
+ (void)PBArrayAdd_m_fileSize;
+ (void)initialize;
+ (void)sumFileNum:(unsigned int)a0 fileSize:(unsigned long long)a1 withType:(int)a2 dicStat:(id)a3;
+ (void)sumDicFileClassStat:(id)a0 toDic:(id)a1;

- (id)getPBPropertyTable;
- (void)sumFileClassStat:(id)a0;

@end
