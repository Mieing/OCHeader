@class NSArray;

@interface IESECShopClothesPreviewMergeManager : NSObject

@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSArray *rest;
@property (nonatomic) long long mergeNum;
@property (nonatomic) long long cycleNum;

- (void)parseSectionConfig:(id)a0;
- (void)process:(id)a0 hasMore:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
