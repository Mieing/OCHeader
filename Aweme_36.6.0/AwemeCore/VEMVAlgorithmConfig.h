@class NSString;

@interface VEMVAlgorithmConfig : NSObject

@property (copy, nonatomic) NSString *photoPath;
@property (copy, nonatomic) NSString *algorithmName;
@property (nonatomic) BOOL needServerExcute;
@property (copy, nonatomic) NSString *algorithmParamJson;
@property (nonatomic) unsigned long long algorithmResultType;

- (void).cxx_destruct;

@end
