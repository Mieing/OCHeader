@class BDReaderOpenParameters, NSString, BDReaderChapterInfo, UIViewController;
@protocol BDReaderInsertedViewControllerProtocol;

@interface BDInsertPageData : NSObject

@property (weak, nonatomic) UIViewController<BDReaderInsertedViewControllerProtocol> *insertVC;
@property (copy, nonatomic) NSString *chapterId;
@property (retain, nonatomic) BDReaderChapterInfo *chapterInfo;
@property (retain, nonatomic) BDReaderOpenParameters *preOpenParam;
@property (retain, nonatomic) BDReaderOpenParameters *nextOpenParam;

- (void).cxx_destruct;

@end
