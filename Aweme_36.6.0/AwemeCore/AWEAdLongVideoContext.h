@class AWEOriginalAdModel, TTVideoEngineModel;

@interface AWEAdLongVideoContext : NSObject

@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (retain, nonatomic) TTVideoEngineModel *engineModel;
@property (nonatomic) double playDuration;

- (void).cxx_destruct;

@end
