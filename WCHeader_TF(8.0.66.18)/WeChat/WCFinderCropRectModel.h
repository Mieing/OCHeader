@class NSString;

@interface WCFinderCropRectModel : NSObject <WCTColumnCoding, PBCoding>

@property (nonatomic) double topPercent;
@property (nonatomic) double leftPercent;
@property (nonatomic) double widthPercent;
@property (nonatomic) double heightPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_topPercent;
+ (void)PBArrayAdd_leftPercent;
+ (void)PBArrayAdd_widthPercent;
+ (void)PBArrayAdd_heightPercent;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (id)initWithPBRectModel:(id)a0;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (BOOL)isValid;
- (void)resetAllValue;
- (double)imageCenterX;
- (double)imageCenterY;
- (id)genCropRectModelPB;

@end
