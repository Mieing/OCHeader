@class NSString, NSDictionary;

@interface IESLiveAAIGSEIInternalModel : IESLiveDynamicModel

@property (copy, nonatomic) NSString *SEI;
@property (copy, nonatomic) NSDictionary *seiInfo;
@property (nonatomic) double interval;
@property (nonatomic) double time;
@property (copy, nonatomic) id /* block */ updateSEIInfoBlock;

- (void).cxx_destruct;

@end
