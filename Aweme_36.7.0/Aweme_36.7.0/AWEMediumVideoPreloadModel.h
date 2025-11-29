@class NSArray, AWEAwemeModel;

@interface AWEMediumVideoPreloadModel : NSObject

@property (nonatomic) double bufferTime;
@property (nonatomic) double playTime;
@property (nonatomic) double bufferPercent;
@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) AWEAwemeModel *currentModel;

- (void).cxx_destruct;

@end
