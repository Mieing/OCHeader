@class NSString;

@interface SilentDownloadMessageWrap : NSObject <PBCoding>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) long long mesSvrId;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) unsigned int createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_mesSvrId;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_createTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
