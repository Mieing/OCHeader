@class NLETrack_OC, NSArray, NSString, NSMutableArray;

@interface NPTrackChangeInfo_OC : NSObject

@property (retain, nonatomic) NSMutableArray *slotChangeInfoArray;
@property (nonatomic) struct shared_ptr<nle::preset::TrackChangeInfo> { struct TrackChangeInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;
@property (readonly, copy, nonatomic) NSArray *slotChangeInfos;
@property (readonly, copy, nonatomic) NSString *trackID;
@property (readonly, nonatomic) unsigned long long trackType;
@property (readonly, nonatomic) unsigned long long trackChangeType;
@property (readonly, nonatomic) NLETrack_OC *trackOri;
@property (readonly, nonatomic) NLETrack_OC *trackNew;

+ (id)getTrackDiffInfosFromCPPArr:(struct vector<std::shared_ptr<nle::preset::TrackChangeInfo>, std::allocator<std::shared_ptr<nle::preset::TrackChangeInfo>>> { void *x0; void *x1; void *x2; })a0;

- (id)initWithCPPNode:(struct shared_ptr<nle::preset::TrackChangeInfo> { struct TrackChangeInfo *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithTrackID:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
