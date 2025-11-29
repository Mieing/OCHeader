@class NSString;

@interface DBContactHeadImage : NSObject <PBCoding, WCTColumnCoding>

@property (nonatomic) unsigned int imgHDStatus;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *headHDImgUrl;
@property (retain, nonatomic) NSString *headHDMd5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_imgHDStatus;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_headHDImgUrl;
+ (void)PBArrayAdd_headHDMd5;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
