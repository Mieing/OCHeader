@class NSString, NSMutableArray, NSArray;

@interface AWESearchNovelWebDataExtractResultModel : NSObject

@property (copy, nonatomic) NSString *realUrl;
@property (copy, nonatomic) NSString *bookName;
@property (copy, nonatomic) NSString *bookUrl;
@property (copy, nonatomic) NSString *catalogUrl;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSMutableArray *selectorList;
@property (retain, nonatomic) NSMutableArray *chapterList;
@property (retain, nonatomic) NSArray *rawChapterList;
@property (copy, nonatomic) NSString *chapterUrl;
@property (copy, nonatomic) NSString *chapterName;
@property (copy, nonatomic) NSString *chapterContent;
@property (nonatomic) long long chapterNumber;
@property (copy, nonatomic) NSString *contentCatalogUrl;
@property (copy, nonatomic) NSString *catalogRealUrl;
@property (nonatomic) BOOL bookCreateByCatalog;
@property (copy, nonatomic) NSString *pageUrl;
@property (copy, nonatomic) NSString *pageContent;
@property (copy, nonatomic) NSString *nextPageUrl;
@property (copy, nonatomic) NSString *prePageUrl;

- (void)p_createModelWithResult:(id)a0;
- (id)p_createSelectListFragment:(id)a0 BaseUrl:(id)a1;
- (id)p_SplicingCompleteUrlWithBaseUrl:(id)a0 relativePath:(id)a1 needSplit:(BOOL)a2;
- (id)p_splitIrregularCharacterForString:(id)a0;
- (id)initWithResultDict:(id)a0;
- (void).cxx_destruct;

@end
