@class NSString;

@interface AWESearchNetWorkConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *flowRequestPath;
@property (nonatomic) long long flowType;
@property (nonatomic) long long requestDataCount;
@property (nonatomic) BOOL needPostMethod;
@property (nonatomic) BOOL customAnalysisResponse;
@property (nonatomic) BOOL netStepSign;
@property (copy, nonatomic) NSString *searchChannel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
