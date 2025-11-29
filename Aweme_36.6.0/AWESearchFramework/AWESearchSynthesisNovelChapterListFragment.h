@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface AWESearchSynthesisNovelChapterListFragment : NSObject <NSCoding>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *realUrl;
@property (copy, nonatomic) NSString *preUrl;
@property (copy, nonatomic) NSString *nextUrl;
@property (copy, nonatomic) NSString *bookName;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *author;
@property (nonatomic) BOOL isAllList;
@property (nonatomic) BOOL isDescending;
@property (copy, nonatomic) NSString *lastRequestUrl;
@property (nonatomic) long long chapterType;
@property (copy, nonatomic) NSArray *chapterList;
@property (retain, nonatomic) NSMutableArray *chapterSelectorList;
@property (retain, nonatomic) NSMutableArray *chapterSelectorUrlList;
@property (copy, nonatomic) NSString *contentCatalogUrl;
@property (copy, nonatomic) NSString *catalogRealUrl;
@property (nonatomic) BOOL bookCreateByCatalog;
@property (nonatomic) BOOL isAllSeletor;
@property (copy, nonatomic) NSArray *catalogChapterList;
@property (copy, nonatomic) NSDictionary *rawRealCatalogResultData;

- (id)initWithUrl:(id)a0 realUrl:(id)a1 bookName:(id)a2 author:(id)a3 coverUrl:(id)a4 chapterList:(id)a5 chapterSelectorList:(id)a6;
- (id)chapterSelectorListArray;
- (void)addChapterList:(id)a0;
- (void)addCatalogChapterList:(id)a0;
- (void)updateChapterSelectorList:(id)a0;
- (void)updateChapterListInDescending:(BOOL)a0;
- (void)updateChapterSelectorListInDescending;
- (void)updateChapterType:(long long)a0;
- (void)updateIsAllList:(BOOL)a0;
- (void)updateRealUrl:(id)a0;
- (void)updateNextUrl:(id)a0;
- (void)updateLastRequestUrl:(id)a0;
- (void)updateBookName:(id)a0 withAuthor:(id)a1;
- (void)updateChapterListInfoInDescending:(BOOL)a0;
- (void)addChapterSelector:(id)a0 isDescending:(BOOL)a1;
- (id)chapterNameWithNumber:(long long)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
