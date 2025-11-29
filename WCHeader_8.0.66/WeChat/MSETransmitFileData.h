@class NSString;

@interface MSETransmitFileData : MSETransmitData <PBCoding>

@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) long long fileSize;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_title;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
