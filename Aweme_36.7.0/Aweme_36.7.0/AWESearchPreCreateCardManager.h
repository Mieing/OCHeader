@class NSDictionary, NSArray;

@interface AWESearchPreCreateCardManager : NSObject

@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) NSArray *viewModels;
@property (nonatomic) BOOL isStopPreCreateCard;
@property (copy, nonatomic) id /* block */ preCreateCardDataBlock;

- (void)registerConfig:(id)a0;
- (void)generatePreCreateCardDataWithChannel:(id)a0 url:(id)a1 dataModelBlock:(id /* block */)a2 renderModelBlock:(id /* block */)a3 comContextBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)onPreCreateAction:(id)a0;
- (BOOL)canPreCreateCard;
- (void)preCreateCardIfNeed:(id /* block */)a0;
- (void)stopPreCreateCard;
- (void).cxx_destruct;
- (id)init;

@end
