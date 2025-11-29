@interface GCTwoResultIntegrate : NSObject

@property (retain, nonatomic) id firstResult;
@property (retain, nonatomic) id secondResult;
@property (nonatomic) int targetNum;
@property (copy, nonatomic) id /* block */ intergrateBlock;
@property (nonatomic) BOOL isCompleted;
@property (copy, nonatomic) id /* block */ didSelect;

- (id)init;
- (void)onFirstResultGet:(id)a0;
- (void)onSecondResultGet:(id)a0;
- (void)decreateNumAndCheckCompete;
- (void)onCompleteBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
