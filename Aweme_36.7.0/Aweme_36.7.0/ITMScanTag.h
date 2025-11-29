@class NSString, NSArray, ITMAsset;

@interface ITMScanTag : NSObject {
    struct shared_ptr<ILASDK::Tag> { struct Tag *__ptr_; struct __shared_weak_count *__cntrl_; } tag;
}

@property (copy, nonatomic) NSString *tagId;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) float tagProb;
@property (nonatomic) float tagArea;
@property (nonatomic) unsigned long long type;
@property (nonatomic) int autoCutType;
@property (copy, nonatomic) NSArray *localIds;
@property (nonatomic) long long count;
@property (retain, nonatomic) ITMAsset *coverAsset;

- (id)initWithOriginTag:(struct shared_ptr<ILASDK::Tag> { struct Tag *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ILASDK::Tag> { struct Tag *x0; struct __shared_weak_count *x1; })tagCPP;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
