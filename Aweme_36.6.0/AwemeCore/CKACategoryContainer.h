@interface CKACategoryContainer : NSObject {
    void /* unknown type, empty encoding */ categoryID;
    void /* unknown type, empty encoding */ observableMediaSequence;
    void /* unknown type, empty encoding */ cachedMediaTrans;
    void /* unknown type, empty encoding */ customAlter;
    void /* unknown type, empty encoding */ mediaTransform;
    void /* unknown type, empty encoding */ libraryObserver;
    void /* unknown type, empty encoding */ originSequence;
    void /* unknown type, empty encoding */ arrayRecursiveMutexLock;
}

@property (nonatomic, readonly) long long flexibleMediaCount;
@property (nonatomic, copy) id /* block */ flexibleFetchCompletion;
@property (nonatomic, readonly) long long count;
@property (nonatomic) double fetchMediaDuration;
@property (nonatomic, retain) id originFetchResult;
@property (nonatomic) BOOL reversed;

- (void)updateWithAlter:(id)a0;
- (void)removeAlter;
- (void)setDataReverse:(BOOL)a0;
- (void)reverse;
- (id)cellModelAtIndexWithIndex:(long long)a0;
- (BOOL)contains:(id)a0;
- (long long)indexOfObject:(id)a0;
- (void)updateFlexibleSequenceWithResult:(id)a0;
- (id)flexibleCellModelAtIndexWithIndex:(long long)a0;
- (BOOL)flexibleContains:(id)a0;
- (long long)flexibleIndexOfObject:(id)a0;
- (id)flexibleSubscribe:(id /* block */)a0;
- (id)subscribe:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
