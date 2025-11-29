@class NSArray, NSString, NPBIMResult, NSDictionary, NPILAFeature, NSDate, NPPreprocessInfo_OC;

@interface NPMaterial_OC : NSObject

@property (readonly, nonatomic) NPILAFeature *ilaResult;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NPILAFeature *ilaResult;
@property (nonatomic) struct shared_ptr<nle::preset::NPMaterial> { struct NPMaterial *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;
@property (readonly, copy, nonatomic) NSString *materialID;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, copy, nonatomic) NSString *slotID;
@property (retain, nonatomic) NPBIMResult *bimResult;
@property (readonly, nonatomic) NPPreprocessInfo_OC *preprocessInfo;
@property (copy, nonatomic) NSDictionary *frameDic;
@property (copy, nonatomic) NSArray *faceRect;
@property (readonly, copy, nonatomic) NSString *livePhotoID;
@property (nonatomic) unsigned long long livePhotoType;

+ (id)mutableCopyMaterial:(id)a0 requiredFeatures:(id)a1 timeStamps:(id)a2;
+ (id)mergeMaterialWithArr:(id)a0;
+ (id)getMaterialsFromCPPArr:(const void *)a0;

- (id)initWithAssetID:(id)a0 fillWithFilePath:(id)a1;
- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPMaterial> { struct NPMaterial *x0; struct __shared_weak_count *x1; })a0;
- (void)updateMaterialID:(id)a0;
- (void)setLivePhotoID:(id)a0;
- (id)initWithAssetID:(id)a0 fillWithFilePath:(id)a1 creationDate:(id)a2;
- (void)updateWithILAResults:(id)a0 requestILAFeatures:(id)a1 timeStamps:(id)a2;
- (void)updateWithILAResults:(id)a0 requestILAFeatures:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
