@class NSString, AWESearchSynthesisNovelChapterListFragment;

@interface AWESearchSynthesisNovelCatalogData : NSObject

@property (copy, nonatomic) NSString *bookName;
@property (copy, nonatomic) NSString *catalogUrl;
@property (nonatomic) BOOL isBookEnd;
@property (nonatomic) unsigned long long chapterCount;
@property (nonatomic) unsigned long long curIndex;
@property (copy, nonatomic) NSString *curChapterName;
@property (copy, nonatomic) NSString *curChapterID;
@property (retain, nonatomic) AWESearchSynthesisNovelChapterListFragment *chaptersInfo;

- (void).cxx_destruct;

@end
