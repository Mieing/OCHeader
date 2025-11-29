@class ILAResidentLocation, NSString, NSArray, ILAMomentAddress, ILAMomentTag, NSMutableSet, ILAMomentTime;

@interface ILAMomentConfig : NSObject {
    struct shared_ptr<ILASDK::MomentConfig> { struct MomentConfig *__ptr_; struct __shared_weak_count *__cntrl_; } curConfig;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *assetIds;
@property (retain, nonatomic) ILAMomentTime *time;
@property (retain, nonatomic) ILAMomentAddress *address;
@property (retain, nonatomic) ILAMomentTag *tag;
@property (nonatomic) int minCount;
@property (nonatomic) int maxCount;
@property (nonatomic) int groupMonthStep;
@property (copy, nonatomic) NSMutableSet *fromAppListSet;
@property (nonatomic) unsigned long long momentType;
@property (nonatomic) unsigned long long orderType;
@property (nonatomic) unsigned long long aggregateType;
@property (nonatomic) float vidaScore;
@property (nonatomic) float score;
@property (nonatomic) BOOL merge;
@property (copy, nonatomic) NSString *permanentResidence;
@property (nonatomic) long long addrDiffDay;
@property (retain, nonatomic) ILAResidentLocation *resident;
@property (nonatomic) float similarityThreshold;
@property (copy, nonatomic) NSArray *tagWeightList;

- (id)initWithTime:(id)a0 key:(id)a1 title:(id)a2;
- (id)initWithTime:(id)a0 key:(id)a1 orderType:(unsigned long long)a2 title:(id)a3;
- (struct vector<ILASDK::MomentTimeDuration, std::allocator<ILASDK::MomentTimeDuration>> { struct MomentTimeDuration *x0; struct MomentTimeDuration *x1; struct __compressed_pair<ILASDK::MomentTimeDuration *, std::allocator<ILASDK::MomentTimeDuration>> { struct MomentTimeDuration *x0; } x2; })convertTimes:(id)a0;
- (id)initWithTime:(id)a0 key:(id)a1;
- (void)addIncludeTag:(id)a0 type:(unsigned long long)a1;
- (void)addExcludeTag:(id)a0 type:(unsigned long long)a1;
- (struct shared_ptr<ILASDK::MomentConfig> { struct MomentConfig *x0; struct __shared_weak_count *x1; })getTargetConfig;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
