@class NSString, NSArray, NSDictionary, TMPrivacyBPEAInfoModel;

@interface TMPrivacyCallResultModel : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *api;
@property (nonatomic) long long permissionStatus;
@property (copy, nonatomic) NSString *permissionType;
@property (copy, nonatomic) NSString *privacyType;
@property (copy, nonatomic) NSArray *dataTypes;
@property (copy, nonatomic) NSDictionary *privacyApiParams;
@property (copy, nonatomic) NSDictionary *ruleInputParmas;
@property (nonatomic) unsigned long long apiId;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isDowngrade;
@property (copy, nonatomic) NSString *strategyMD5;
@property (copy, nonatomic) NSArray *strategies;
@property (retain, nonatomic) NSDictionary *jsbInfo;
@property (copy, nonatomic) TMPrivacyBPEAInfoModel *bpeaInfo;
@property (copy, nonatomic) NSString *stack;

- (BOOL)enableDispatchHook;
- (id)initWithPrivacyEvent:(id)a0;
- (id)jsonDictForAppLog;
- (BOOL)__enableCollectStackForParams:(id)a0;
- (id)jsonDictForCustomException;
- (void).cxx_destruct;

@end
