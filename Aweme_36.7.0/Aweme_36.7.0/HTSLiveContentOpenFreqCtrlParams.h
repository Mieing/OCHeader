@class NSString;

@interface HTSLiveContentOpenFreqCtrlParams : IESLivePBBaseMessage

@property (nonatomic) long long dayLimit;
@property (nonatomic) long long lifeLimit;
@property (copy, nonatomic) NSString *limitKey;

+ (id)descriptor;

@end
