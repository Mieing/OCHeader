@class NSString, BDReaderOpenParameters, BDReaderChapterInfo, NSMutableDictionary, BDTextLayoutPageData, BDInsertPageData, UIViewController, BDLayoutPageData;
@protocol BDReaderInsertedViewControllerProtocol;

@interface BDReaderPageContext : NSObject {
    NSMutableDictionary *_extra;
}

@property (retain, nonatomic) BDReaderChapterInfo *currentChapterInfo;
@property (retain, nonatomic) BDInsertPageData *insertPageData;
@property (retain, nonatomic) BDLayoutPageData *layoutPageData;
@property (retain, nonatomic) BDReaderOpenParameters *openParams;
@property (readonly, copy, nonatomic) BDReaderChapterInfo *chapterInfo;
@property (readonly, copy, nonatomic) NSString *chapterId;
@property (readonly, copy, nonatomic) UIViewController<BDReaderInsertedViewControllerProtocol> *insertedVC;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) unsigned long long pageIndex;
@property (readonly, nonatomic) BDLayoutPageData *pageData;
@property (readonly, nonatomic) BDTextLayoutPageData *textPageData;
@property (readonly, nonatomic) NSMutableDictionary *extra;

- (id)initWithInsertPageData:(id)a0;
- (id)initWithOpenParams:(id)a0;
- (id)initWithLayoutPageData:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
