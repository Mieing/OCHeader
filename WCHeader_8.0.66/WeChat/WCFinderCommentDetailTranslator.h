@class NSMutableArray, NSMutableSet, WCFinderComment;
@protocol WCFinderCommentDetailTranslatorDelegate;

@interface WCFinderCommentDetailTranslator : NSObject

@property (nonatomic) BOOL isFetchingTranslateComment;
@property (retain, nonatomic) WCFinderComment *selectedComment;
@property (retain, nonatomic) NSMutableSet *visiableComments;
@property (retain, nonatomic) NSMutableArray *autoTranslateQueue;
@property (weak, nonatomic) id<WCFinderCommentDetailTranslatorDelegate> delegate;
@property (readonly, nonatomic) BOOL isInAutoTranslateMode;

- (BOOL)contentCanBeTranslated:(id)a0;
- (void)translateContent:(id)a0 complection:(id /* block */)a1;
- (void)translateComment:(id)a0;
- (void)enableAutoTranslateAtSelectedComment:(id)a0 visibleRows:(id)a1;
- (void)disabledAutoTranslate;
- (void)prepareDataFor:(id)a0;
- (void)willDisplayIndexPath:(id)a0 verticalVelocity:(double)a1;
- (void)didEndDisplayingIndexPath:(id)a0;
- (void)prefetchIfNeedWithTargetIndexPath:(id)a0 visibleRows:(id)a1;
- (void)prefetchComments:(id)a0;
- (id)_indexPathsForStartSection:(unsigned long long)a0 endSection:(unsigned long long)a1;
- (void)_translateComments:(id)a0;
- (void)_enqueueWithIndexPaths:(id)a0;
- (void)_enqueueWithComments:(id)a0;
- (void)_consumeQueue;
- (void).cxx_destruct;

@end
