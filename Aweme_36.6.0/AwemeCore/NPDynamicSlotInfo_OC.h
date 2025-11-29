@class NSSet, NSArray, NSString, NLEStyClip_OC, NLEStyCrop_OC;

@interface NPDynamicSlotInfo_OC : NSObject {
    struct shared_ptr<nle::preset::NPDynamicSlotInfo> { struct NPDynamicSlotInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (nonatomic) unsigned long long slotType;
@property (nonatomic) long long slotTypeHint;
@property (nonatomic) double duration;
@property (nonatomic) BOOL needPreprocess;
@property (nonatomic) NSSet *preprocessTypeList;
@property (copy, nonatomic) NSArray *preAIGCIds;
@property (copy, nonatomic) NSArray *preAIGCPaths;
@property (copy, nonatomic) NSArray *preAIGCAsyncRequests;
@property (nonatomic) int detectType;
@property (copy, nonatomic) NSString *detectId;
@property (copy, nonatomic) NSString *reproductionId;
@property (readonly, copy, nonatomic) NSString *recommendMaterialId;
@property (copy, nonatomic) NSString *mutableSlotId;
@property (nonatomic) unsigned long long extraType;
@property (copy, nonatomic) NSString *resourcePath;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) long long resourceWidth;
@property (nonatomic) long long resourceHeight;
@property (nonatomic) long long resourceDuration;
@property (nonatomic) long long slotStartTime;
@property (nonatomic) long long slotEndTime;
@property (nonatomic) long long resourceClipStart;
@property (nonatomic) long long resourceClipEnd;
@property (nonatomic) long long slotWidth;
@property (nonatomic) long long slotHeight;
@property (copy, nonatomic) NSString *alignMode;
@property (nonatomic) long long fillWidth;
@property (nonatomic) long long fillHeight;
@property (retain, nonatomic) NLEStyClip_OC *clip;
@property (retain, nonatomic) NLEStyCrop_OC *crop;
@property (nonatomic) BOOL updateResource;
@property (nonatomic) BOOL isLivePhoto;
@property (copy, nonatomic) NSString *livePhotoID;
@property (nonatomic) unsigned long long livePhotoType;
@property (copy, nonatomic) NSString *slotLivePhotoID;
@property (copy, nonatomic) NSString *slotUUID;

+ (id)getDynamicSlotInfosFromCPPArr:(struct vector<std::shared_ptr<nle::preset::NPDynamicSlotInfo>, std::allocator<std::shared_ptr<nle::preset::NPDynamicSlotInfo>>> { void *x0; void *x1; void *x2; })a0;

- (id)deepClone;
- (struct shared_ptr<nle::preset::NPDynamicSlotInfo> { struct NPDynamicSlotInfo *x0; struct __shared_weak_count *x1; })cppValue;
- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPDynamicSlotInfo> { struct NPDynamicSlotInfo *x0; struct __shared_weak_count *x1; })a0;
- (unsigned long long)preprocessType;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
