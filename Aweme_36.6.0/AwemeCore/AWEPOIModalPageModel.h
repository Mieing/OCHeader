@interface AWEPOIModalPageModel : NSObject

@property (nonatomic) double topOffset;
@property (nonatomic) long long pageSize;
@property (nonatomic) BOOL tapBlankToClose;
@property (weak, nonatomic) AWEPOIModalPageModel *prePage;
@property (weak, nonatomic) AWEPOIModalPageModel *nextPage;
@property (nonatomic) BOOL contentScrollEnabled;

+ (double)pageHeightForPageSize:(long long)a0;
+ (long long)pageSizeForPageHeight:(double)a0;

- (BOOL)hasPrePageSizeAndNotSelf;
- (BOOL)hasNextPageSizeAndNotSelf;
- (id)initWithPageSize:(long long)a0 contentScrollEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithPageSize:(long long)a0;

@end
