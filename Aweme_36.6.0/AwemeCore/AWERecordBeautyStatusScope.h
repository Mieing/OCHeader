@class CKScorageCOWMap;

@interface AWERecordBeautyStatusScope : CKScorageScope

@property (readonly, nonatomic) CKScorageCOWMap *itemMap;
@property (readonly, nonatomic) CKScorageCOWMap *categoryMap;

- (id)categoryFor:(id)a0;
- (void)setCategory:(id)a0 for:(id)a1;
- (id)itemFor:(id)a0;
- (void)setItem:(id)a0 for:(id)a1;

@end
