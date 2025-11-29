@class NSString, NSDictionary, NSArray, NSNumber, NSObject;

@interface TSPKAPIModel : NSObject

@property (copy, nonatomic) NSString *pipelineType;
@property (copy, nonatomic) NSString *apiMethod;
@property (copy, nonatomic) NSString *apiClass;
@property (copy, nonatomic) NSString *dataType;
@property (nonatomic) long long apiId;
@property (nonatomic) unsigned long long apiUsageType;
@property (weak, nonatomic) NSObject *instance;
@property (copy, nonatomic) NSString *hashTag;
@property (retain, nonatomic) NSNumber *errorCode;
@property (nonatomic) BOOL isDowngradeBehavior;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL isNonsenstive;
@property (nonatomic) BOOL isNonauth;
@property (nonatomic) BOOL beforeOrAfterCall;
@property (nonatomic) BOOL isCustomApi;
@property (copy, nonatomic) NSArray *backtraces;
@property (copy, nonatomic) NSString *bizLine;
@property (nonatomic) unsigned long long apiStoreType;
@property (copy, nonatomic) id /* block */ customReleaseCheckBlock;
@property (copy, nonatomic) id /* block */ downgradeAction;
@property (copy, nonatomic) NSString *authorizationStatus;

- (void).cxx_destruct;

@end
