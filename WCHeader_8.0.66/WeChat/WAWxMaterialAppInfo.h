@class NSString, NSArray;

@interface WAWxMaterialAppInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *mime;
@property (retain, nonatomic) NSString *fileExt;
@property (retain, nonatomic) NSArray *recentAppArr;
@property (retain, nonatomic) NSArray *allAppArr;
@property (retain, nonatomic) NSArray *materialInfoList;
@property (nonatomic) double reqTimeLast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mime;
+ (void)PBArrayAdd_fileExt;
+ (void)PBArrayAdd_reqTimeLast;
+ (void)PBArrayAdd_recentAppArr;
+ (void)PBArrayAdd_allAppArr;
+ (void)PBArrayAdd_materialInfoList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
