@class NSString, ITMScoreInfo, NSArray, NSSet;

@interface ITMScanResult : NSObject {
    struct shared_ptr<ILASDK::ScanResult> { struct ScanResult *__ptr_; struct __shared_weak_count *__cntrl_; } targetScanResult;
}

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) long long frame;
@property (retain, nonatomic) ITMScoreInfo *scoreInfo;
@property (copy, nonatomic) NSArray *clip128Info;
@property (copy, nonatomic) NSArray *clip12830MInfo;
@property (copy, nonatomic) NSArray *similarFeature;
@property (copy, nonatomic) NSArray *tagsInfo;
@property (nonatomic) BOOL isBigLeader;
@property (nonatomic) BOOL isPorn;
@property (retain, nonatomic) NSArray *faces;
@property (retain, nonatomic) NSArray *skeletons;
@property (retain, nonatomic) NSSet *modelScaned;

- (id)initWithOriginResult:(struct shared_ptr<ILASDK::ScanResult> { struct ScanResult *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ILASDK::ScanResult> { struct ScanResult *x0; struct __shared_weak_count *x1; })scanResultCPP;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
