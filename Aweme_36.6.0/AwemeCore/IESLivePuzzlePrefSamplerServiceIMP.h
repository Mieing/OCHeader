@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLivePuzzlePrefSamplerServiceIMP : NSObject <PuzzleHybridPrefSamplerProtocol>

@property (retain, nonatomic) NSMutableDictionary *infoDic;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
