@class NSArray, MMListenCategoryItem;

@interface TingCoverInfo : NSObject

@property (nonatomic) unsigned int style;
@property (retain, nonatomic) NSArray *arrCoverUrls;
@property (nonatomic) unsigned long long coverNum;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (readonly, nonatomic) BOOL isPagStyle;

+ (id)coverVMFromUrl:(id)a0;
+ (id)coverVMFromCategoryItem:(id)a0;

- (BOOL)isEqualToCoverInfo:(id)a0;
- (unsigned long long)maxFetchingCount;
- (void).cxx_destruct;

@end
