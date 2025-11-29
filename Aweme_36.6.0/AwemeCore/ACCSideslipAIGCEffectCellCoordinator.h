@class NSMutableDictionary, NSString, NSOperationQueue, NSCache;

@interface ACCSideslipAIGCEffectCellCoordinator : NSObject <ACCSideslipPropPickCellCoordinatorProtocol>

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSOperationQueue *opQueue;
@property (retain, nonatomic) NSMutableDictionary *loadImageTaskDict;
@property (retain, nonatomic) NSMutableDictionary *pendingloadImageCompletionBlockDict;
@property (readonly, nonatomic) Class cellClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
