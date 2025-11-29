@class AWECodeGenAwemeModel, NSString;

@interface AWECodeGenDouyinContentPayMidBreakStrategyResponse : AWEBaseResponseModel

@property (nonatomic) BOOL nextReqCurrentTime;
@property (nonatomic) int nextReqAdType;
@property (nonatomic) long long forceAdPlayTime;
@property (nonatomic) BOOL requestLocalAlgorithmPackage;
@property (retain, nonatomic) AWECodeGenAwemeModel *adAwemeModel;
@property (copy, nonatomic) NSString *reason;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
