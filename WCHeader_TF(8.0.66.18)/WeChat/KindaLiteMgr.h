@class NSMutableArray;

@interface KindaLiteMgr : NSObject

@property (retain, nonatomic) NSMutableArray *kindaLiteUseCaseCache;
@property (retain, nonatomic) NSMutableArray *startQueue;
@property (nonatomic) BOOL starting;

- (id)lastUseCase;
- (void)compactKindaLiteUseCaseCache;
- (void)processNext;
- (id)startKindaLiteUseCase:(id)a0 data:(id)a1 callback:(id)a2;
- (void)reportNativeStartUseCaseEntry:(id)a0;
- (id)findDuplicatePayUseCase:(id)a0 data:(id)a1;
- (BOOL)allowsDuplicatePayAfterPaySuccess:(id)a0 data:(id)a1;
- (BOOL)isPaying;
- (void)stopDuplicateAndContinue:(id)a0 task:(id)a1 onContinue:(id /* block */)a2;
- (BOOL)kindaLiteUseCaseExist;
- (void).cxx_destruct;

@end
