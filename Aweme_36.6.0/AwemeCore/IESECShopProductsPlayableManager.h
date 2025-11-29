@class __begin_, NSMutableDictionary, IESECShopProductsPlayableTask, UICollectionView, NSTimer, __cap_, __end_;
@protocol IESECShopProductsPlayableManagerDelegate, IESECShopProductsPlayableList;

@interface IESECShopProductsPlayableManager : NSObject {
    NSMutableDictionary *_userInfos;
    id<IESECShopProductsPlayableList> _playableList;
    IESECShopProductsPlayableTask *_currentTask;
    struct deque<NSIndexPath *, std::allocator<NSIndexPath *>> { struct __split_buffer<NSIndexPath *__strong *, std::allocator<NSIndexPath *__strong *>> { __begin_ ***__first_; __end_ ***x0; __cap_ ***x1; id **x2; } __map_; unsigned long long __start_; unsigned long long __size_; } _playableQueue;
    BOOL _isActivated;
    NSTimer *_timer;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<IESECShopProductsPlayableManagerDelegate> delegate;
@property (nonatomic) unsigned long long strategy;
@property (nonatomic) double stationaryTime;
@property (readonly, nonatomic) IESECShopProductsPlayableTask *currentTask;

- (void)cancelCurrentTask;
- (id)initWithPlayableList:(id)a0;
- (void)updateVisibleArea;
- (void)playNextPlayable;
- (id)taskAtIndexPath:(id)a0;
- (void)playAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (id)sortedIndexPathsForVisibleItems;

@end
