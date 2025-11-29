@class NLEBranchListener, NSString, NSHashTable;

@interface NLEBranch_OC : NSObject <NLEBranchListenerDelegate> {
    struct shared_ptr<cut::model::NLEBranch> { struct NLEBranch *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (retain, nonatomic) NSHashTable *listenerArray;
@property (retain, nonatomic) NLEBranchListener *branchListener;
@property (nonatomic) struct shared_ptr<cut::model::NLEBranch> { struct NLEBranch *x0; struct __shared_weak_count *x1; } cppValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEBranch> { struct NLEBranch *x0; struct __shared_weak_count *x1; })a0;
- (void)clearBefore:(id)a0;
- (void)clearAfter:(id)a0;
- (id)commitWithUUID:(id)a0;
- (id)gotoCommitWithUUID:(id)a0;
- (void)addCommit:(id)a0;
- (id)getHeadPrev:(long long)a0;
- (id)getHeadNext:(long long)a0;
- (id)getHeadPrev;
- (id)resetToPrev;
- (id)resetToNext;
- (id)getHead;
- (id)getHeadNext;
- (void)branchDidChange;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)addListener:(id)a0;
- (id).cxx_construct;

@end
