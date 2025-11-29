@class NSString, NSArray, NSURL, NSMutableArray;

@interface BDReaderChapterContent : NSObject

@property (retain, nonatomic) NSMutableArray *paraInfos;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } paraInfoLock;
@property (copy, nonatomic) NSString *chapterId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSURL *baseURL;
@property (nonatomic) BOOL chapterControlAppendTitle;
@property (nonatomic) BOOL needAppendTitle;
@property (readonly, copy, nonatomic) NSArray *paragraphInfos;

- (id)getParagraphInfoWithParaId:(id)a0;
- (void)appendParagraphInfo:(id)a0;
- (void)configParagraphInfos:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
