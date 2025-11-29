@class AWEMessageReachVerifyComponentModel, NSString;

@interface AWEMessageReachPreCheckResultModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEMessageReachVerifyComponentModel *verifyModel;
@property (nonatomic) long long checkResult;
@property (nonatomic) long long detailCheckResult;
@property (nonatomic) long long badgeOriginCheckResult;
@property (nonatomic) long long bubbleOriginCheckResult;
@property (copy, nonatomic) NSString *blockDesc;
@property (copy, nonatomic) NSString *componentID;
@property (nonatomic) BOOL precheckTimeOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateSuccessModel:(id)a0;
+ (id)generateTimeoutModel:(id)a0;
+ (id)generateBizGuideCheckResultModel:(id)a0 verifyModel:(id)a1;
+ (id)generateBadgeCheckResult:(id)a0;
+ (id)generateBubbleCheckResult:(id)a0;
+ (long long)getBadgeCheckResultWithExceptionInfo:(id)a0;
+ (BOOL)shouldBypassPrecheckWithContext:(id)a0 detailCheckResult:(long long)a1;
+ (BOOL)isInHomeTab;
+ (long long)getCheckResultWithExceptionInfo:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
