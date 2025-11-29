@class NSString;
@protocol AEKEditorConvertible;

@interface AEKBranchEditorImpl : NSObject <AEKBranchEditor>

@property (weak, nonatomic) id<AEKEditorConvertible> convertor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gotoCommit:(id)a0;
- (id)resetToPrev;
- (id)resetToNext;
- (id)initWithConvertor:(id)a0;
- (id)nleEditor;
- (id)commitWithID:(id)a0;
- (id)headPrev;
- (id)headPrev:(long long)a0;
- (id)commitPrev:(id)a0;
- (id)headNext;
- (id)headNext:(long long)a0;
- (id)commitNext:(id)a0;
- (void)clearPrev:(id)a0;
- (void)clearNext:(id)a0;
- (BOOL)trimRangeWithStart:(id)a0 end:(id)a1;
- (void)trimRangeWithRedoCount:(long long)a0 undoCount:(long long)a1;
- (id)head;
- (void).cxx_destruct;
- (void)clear;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
