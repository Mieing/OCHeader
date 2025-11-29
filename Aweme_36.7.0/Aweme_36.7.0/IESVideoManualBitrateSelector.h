@class NSDictionary, NSSet;

@interface IESVideoManualBitrateSelector : NSObject

@property (retain, nonatomic) NSDictionary *manualBSDistributeConfig;
@property (retain, nonatomic) NSSet *isSDSet;
@property (retain, nonatomic) NSSet *isHDSet;
@property (retain, nonatomic) NSSet *isFullHDSet;
@property (retain, nonatomic) NSSet *is2KSet;
@property (retain, nonatomic) NSSet *is4KSet;

+ (long long)switchClarityWithGearType:(unsigned long long)a0;
+ (id)sharedInstance;

- (unsigned long long)determineFinalGearsWith:(unsigned long long)a0 EnableSuperResolution:(BOOL)a1 BsModel:(id)a2;
- (id)fliterDifferentCodecBSWithBSModels:(id)a0 currentBSModel:(id)a1;
- (BOOL)isSDWithBSModel:(id)a0 needSave:(BOOL)a1;
- (BOOL)isHDWithBSModel:(id)a0 withSR:(BOOL)a1 needSave:(BOOL)a2;
- (BOOL)isFullHDWithBSModel:(id)a0 withSR:(BOOL)a1 needSave:(BOOL)a2;
- (BOOL)is2KWithBSModel:(id)a0 needSave:(BOOL)a1;
- (BOOL)is4KWithBSModel:(id)a0 needSave:(BOOL)a1;
- (BOOL)is4KHDRWithBSModel:(id)a0 needSave:(BOOL)a1;
- (id)findMostSuitableGearWithModels:(id)a0 WithCurBSModel:(id)a1;
- (BOOL)isEqualCurBSModel:(id)a0 lastBSModel:(id)a1;
- (unsigned long long)createManualGearTypeWithBSModels:(id)a0 EnableSuperResolution:(BOOL)a1 BSModel:(id)a2;
- (id)selectModelWithModels:(id)a0 EnableSuperResolution:(BOOL)a1 SelectedGearType:(unsigned long long)a2 WithCurrentModel:(id)a3;
- (unsigned long long)determineFinalGearWith:(unsigned long long)a0 BsModel:(id)a1;
- (unsigned long long)determineFinalGearWith:(unsigned long long)a0 EnableSuperResolution:(BOOL)a1 BsModel:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
