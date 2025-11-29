@class NSMutableDictionary;
@protocol IESPlayTimePredictEngineDelegate;

@interface IESPlayTimePredictService : NSObject

@property (retain, nonatomic) id<IESPlayTimePredictEngineDelegate> predictEngine;
@property (retain, nonatomic) NSMutableDictionary *predictorsDictionary;

+ (id)sharedInstance;

- (void)setupWithPredictEngine:(id)a0;
- (void)addPredictConfigDictionary:(id)a0;
- (void)addPredictInputFeature:(id)a0 forSceneName:(id)a1;
- (void)predictWithSceneName:(id)a0 completion:(id /* block */)a1;
- (id)currentPredictResultForSceneName:(id)a0;
- (void).cxx_destruct;

@end
