@class NSDictionary, IESPlayTimePredictConfig, IESPlayTimePredictLinkedList;
@protocol IESPlayTimePredictEngineDelegate;

@interface IESPlayTimeSceneDataPredictor : NSObject

@property (retain, nonatomic) IESPlayTimePredictConfig *config;
@property (retain, nonatomic) IESPlayTimePredictLinkedList *inputFeaturesList;
@property (copy, nonatomic) NSDictionary *cachePredictResult;
@property (weak, nonatomic) id<IESPlayTimePredictEngineDelegate> predictEngine;

+ (id)predictorWithConfig:(id)a0 predictEngine:(id)a1;

- (void)addPredictInputFeature:(id)a0;
- (void)predictWithCompletion:(id /* block */)a0;
- (id)currentPredictResult;
- (void).cxx_destruct;

@end
