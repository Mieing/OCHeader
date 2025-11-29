@class NSString, NSDictionary;

@interface AWEPerfFMPCalculateResultModel : NSObject <IESLLPerfFMPCalculateResultModel>

@property (nonatomic) unsigned long long result;
@property (nonatomic) double duration;
@property (nonatomic) double totalCostTime;
@property (nonatomic) int totalCalculateCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long result;
@property (nonatomic) double duration;
@property (nonatomic) double totalCostTime;
@property (nonatomic) int totalCalculateCount;
@property (copy, nonatomic) NSDictionary *fmpLastViewDictionary;

- (void).cxx_destruct;

@end
