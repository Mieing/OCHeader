@class NSString;

@interface MSEFavFileTask : NSObject <PBCoding>

@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) unsigned int fileSize;
@property (retain, nonatomic) NSString *md5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_fileName;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_md5;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
