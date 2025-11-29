@class NSString;

@interface WNFontInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *familyName;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *zipFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_displayName;
+ (void)PBArrayAdd_familyName;
+ (void)PBArrayAdd_fileName;
+ (void)PBArrayAdd_zipFilePath;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithFavFontResourceInfo:(id)a0 andFileName:(id)a1 andZipFilePath:(id)a2;
- (void).cxx_destruct;

@end
