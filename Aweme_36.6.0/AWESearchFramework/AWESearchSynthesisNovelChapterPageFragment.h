@class NSString;

@interface AWESearchSynthesisNovelChapterPageFragment : NSObject

@property (copy, nonatomic) NSString *chapterTitle;
@property (nonatomic) long long chapterNumber;
@property (nonatomic) long long pageIndex;
@property (copy, nonatomic) NSString *pageUrl;
@property (copy, nonatomic) NSString *pageContent;
@property (copy, nonatomic) NSString *nextUrl;
@property (copy, nonatomic) NSString *preUrl;

- (id)initWithPageUrl:(id)a0 withContent:(id)a1 withNextUrl:(id)a2 withPreUrl:(id)a3;
- (void).cxx_destruct;

@end
