@class NSString, NSArray, ILAAsset;

@interface ILAScanTag : NSObject <CAKAlbumInsightItemData> {
    struct shared_ptr<ILASDK::Tag> { struct Tag *__ptr_; struct __shared_weak_count *__cntrl_; } tag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *tagId;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) float tagProb;
@property (nonatomic) float tagArea;
@property (nonatomic) unsigned long long type;
@property (nonatomic) int autoCutType;
@property (copy, nonatomic) NSArray *localIds;
@property (nonatomic) long long count;
@property (retain, nonatomic) ILAAsset *coverAsset;

- (id)initWithOriginTag:(struct shared_ptr<ILASDK::Tag> { struct Tag *x0; struct __shared_weak_count *x1; })a0;
- (id)coverAssetId;
- (struct shared_ptr<ILASDK::Tag> { struct Tag *x0; struct __shared_weak_count *x1; })getTargetTag;
- (void).cxx_destruct;
- (id)assetIds;
- (id).cxx_construct;
- (id)title;

@end
